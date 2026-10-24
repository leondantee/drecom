#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: e2d_id17_type15
// Address: 0x2b21d0 - 0x2b2274
void e2d_id17_type15_0x2b21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id17_type15_0x2b21d0");
#endif

    switch (ctx->pc) {
        case 0x2b2224u: goto label_2b2224;
        default: break;
    }

    ctx->pc = 0x2b21d0u;

    // 0x2b21d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b21d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b21d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b21d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b21dc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b21e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b21e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b21e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b21e8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b21e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b21ec: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2b21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2b21f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b21f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b21f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b21f8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b21f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b21fc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2b21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2b2200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2204: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2208: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b2208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b220c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b2210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2218: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b2218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b221c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B221Cu;
    SET_GPR_U32(ctx, 31, 0x2B2224u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B221Cu, 0x2B2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2224u;
label_2b2224:
    // 0x2b2224: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b2224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b2228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b2228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b222c: 0x0  nop
    ctx->pc = 0x2b222cu;
    // NOP
    // 0x2b2230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2234: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b2238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b223c: 0x0  nop
    ctx->pc = 0x2b223cu;
    // NOP
    // 0x2b2240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2244: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2248: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b2248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b224c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2250: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2254: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b2254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2258: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b225c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2260: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b2260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b2264: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b2264u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b226c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2274u;
}

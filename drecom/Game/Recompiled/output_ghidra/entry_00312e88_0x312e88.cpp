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

// Function: entry_00312e88
// Address: 0x312e88 - 0x312f18
void entry_00312e88_0x312e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312e88_0x312e88");
#endif

    switch (ctx->pc) {
        case 0x312ef8u: goto label_312ef8;
        default: break;
    }

    ctx->pc = 0x312e88u;

    // 0x312e88: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312e90: 0x0  nop
    ctx->pc = 0x312e90u;
    // NOP
    // 0x312e94: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312e98: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312ea0: 0x0  nop
    ctx->pc = 0x312ea0u;
    // NOP
    // 0x312ea4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312ea8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312eb0: 0x0  nop
    ctx->pc = 0x312eb0u;
    // NOP
    // 0x312eb4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312eb8: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x312eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x312ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312ec0: 0x0  nop
    ctx->pc = 0x312ec0u;
    // NOP
    // 0x312ec4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312ec8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x312ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ecc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x312eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x312ed0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x312ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x312ed4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x312ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x312ed8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x312ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x312edc: 0x34425e35  ori         $v0, $v0, 0x5E35
    ctx->pc = 0x312edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24117);
    // 0x312ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312ee4: 0x0  nop
    ctx->pc = 0x312ee4u;
    // NOP
    // 0x312ee8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x312ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x312eec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x312eecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x312ef0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x312EF0u;
    SET_GPR_U32(ctx, 31, 0x312EF8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x312EF0u, 0x312EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312EF8u;
label_312ef8:
    // 0x312ef8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x312ef8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312efc: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x312efcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x312f00: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x312f00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312f0c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x312f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312f10: 0x3e00008  jr          $ra
    ctx->pc = 0x312F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312F18u;
}

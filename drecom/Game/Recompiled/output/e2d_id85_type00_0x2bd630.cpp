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

// Function: e2d_id85_type00
// Address: 0x2bd630 - 0x2bd734
void e2d_id85_type00_0x2bd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id85_type00_0x2bd630");
#endif

    switch (ctx->pc) {
        case 0x2bd6d0u: goto label_2bd6d0;
        default: break;
    }

    ctx->pc = 0x2bd630u;

    // 0x2bd630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd634: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd638: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd63c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd644: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd648: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bd648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bd64c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2bd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2bd650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd658: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bd658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bd65c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2bd65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2bd660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd664: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd668: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bd668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bd66c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2bd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2bd670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd678: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bd678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bd67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2bd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd684: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd688: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2bd688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2bd68c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd690: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd698: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd69c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2bd69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2bd6a0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2bd6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2bd6a4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2bd6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2bd6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd6ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd6b0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2bd6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2bd6b4: 0x3c023f5e  lui         $v0, 0x3F5E
    ctx->pc = 0x2bd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16222 << 16));
    // 0x2bd6b8: 0x3442b852  ori         $v0, $v0, 0xB852
    ctx->pc = 0x2bd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47186);
    // 0x2bd6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd6c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd6c4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2bd6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2bd6c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BD6C8u;
    SET_GPR_U32(ctx, 31, 0x2BD6D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BD6C8u, 0x2BD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD6D0u;
label_2bd6d0:
    // 0x2bd6d0: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2bd6d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd6d8: 0x0  nop
    ctx->pc = 0x2bd6d8u;
    // NOP
    // 0x2bd6dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd6dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd6e0: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x2bd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x2bd6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd6e8: 0x0  nop
    ctx->pc = 0x2bd6e8u;
    // NOP
    // 0x2bd6ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd6f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd6f4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bd6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bd6f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2bd6fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd700: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2bd700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2bd704: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2bd704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bd708: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd70c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2bd70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bd710: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2bd710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2bd714: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2bd714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2bd718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bd718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd71c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd720: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bd720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bd724: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd724u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd728: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd72c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD734u;
}

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

// Function: entry_002d20a4
// Address: 0x2d20a4 - 0x2d2154
void entry_002d20a4_0x2d20a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d20a4_0x2d20a4");
#endif

    switch (ctx->pc) {
        case 0x2d20f8u: goto label_2d20f8;
        default: break;
    }

    ctx->pc = 0x2d20a4u;

    // 0x2d20a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20a8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d20ac: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2d20b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d20b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d20b4: 0x0  nop
    ctx->pc = 0x2d20b4u;
    // NOP
    // 0x2d20b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d20b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d20bc: 0x0  nop
    ctx->pc = 0x2d20bcu;
    // NOP
    // 0x2d20c0: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2D20C0u;
    {
        const bool branch_taken_0x2d20c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d20c0) {
            ctx->pc = 0x2D21F4u;
            return;
        }
    }
    ctx->pc = 0x2D20C8u;
    // 0x2d20c8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2d20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2d20cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d20ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d20d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d20d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20d8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d20dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d20e0: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d20e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d20e4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d20e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d20e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d20ec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d20f0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D20F0u;
    SET_GPR_U32(ctx, 31, 0x2D20F8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D20F0u, 0x2D20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D20F8u;
label_2d20f8:
    // 0x2d20f8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D20F8u;
    {
        const bool branch_taken_0x2d20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20f8) {
            ctx->pc = 0x2D21F4u;
            return;
        }
    }
    ctx->pc = 0x2D2100u;
    // 0x2d2100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d2100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d2104: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x2d2104u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2d2108: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d210c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d210cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2110: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x2d2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x2d2114: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2D2114u;
    {
        const bool branch_taken_0x2d2114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2114) {
            ctx->pc = 0x2D2154u;
            return;
        }
    }
    ctx->pc = 0x2D211Cu;
    // 0x2d211c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2120: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2124: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2128: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2d2128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d212c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2130: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d2130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2134: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2138: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d2138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d213c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2140: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d2140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2144: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2148: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d214c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D214Cu;
    {
        const bool branch_taken_0x2d214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d214c) {
            ctx->pc = 0x2D21F4u;
            return;
        }
    }
    ctx->pc = 0x2D2154u;
}

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

// Function: entry_00244444
// Address: 0x244444 - 0x2444ec
void entry_00244444_0x244444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244444_0x244444");
#endif

    switch (ctx->pc) {
        case 0x2444d0u: goto label_2444d0;
        default: break;
    }

    ctx->pc = 0x244444u;

    // 0x244444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x244444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244448: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x244448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x24444c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24444cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x244450: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x244450u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x244454: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244458: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x244458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x24445c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x24445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x244460: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x244460u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x244464: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x244464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x244468: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x244468u;
    {
        const bool branch_taken_0x244468 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x244468) {
            ctx->pc = 0x2444ECu;
            return;
        }
    }
    ctx->pc = 0x244470u;
    // 0x244470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244474: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x244474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244478: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x244478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x24447c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x24447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x244480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244484: 0x0  nop
    ctx->pc = 0x244484u;
    // NOP
    // 0x244488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24448c: 0x0  nop
    ctx->pc = 0x24448cu;
    // NOP
    // 0x244490: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x244490u;
    {
        const bool branch_taken_0x244490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244490) {
            ctx->pc = 0x2444ECu;
            return;
        }
    }
    ctx->pc = 0x244498u;
    // 0x244498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x244498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24449c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x24449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2444a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2444a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2444a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2444acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2444b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2444b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2444b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2444bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2444c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2444c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2444c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2444c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2444C8u;
    SET_GPR_U32(ctx, 31, 0x2444D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2444C8u, 0x2444D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444D0u;
label_2444d0:
    // 0x2444d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2444d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2444d4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2444d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2444d8: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x2444d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x2444dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2444dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2444e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2444e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2444e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2444e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2444e8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2444e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2444ecu;
}

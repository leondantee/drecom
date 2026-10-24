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

// Function: entry_00226498
// Address: 0x226498 - 0x226568
void entry_00226498_0x226498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226498_0x226498");
#endif

    switch (ctx->pc) {
        case 0x226504u: goto label_226504;
        case 0x226528u: goto label_226528;
        default: break;
    }

    ctx->pc = 0x226498u;

    // 0x226498: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22649c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x22649cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2264a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2264a4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2264a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2264a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2264a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2264acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264b0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2264b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2264b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2264b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264b8: 0x0  nop
    ctx->pc = 0x2264b8u;
    // NOP
    // 0x2264bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2264bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2264c0: 0x0  nop
    ctx->pc = 0x2264c0u;
    // NOP
    // 0x2264c4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x2264C4u;
    {
        const bool branch_taken_0x2264c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2264c4) {
            ctx->pc = 0x226568u;
            return;
        }
    }
    ctx->pc = 0x2264CCu;
    // 0x2264cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2264d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264d4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2264d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2264d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2264d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2264dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2264e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2264e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2264e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2264ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2264f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2264f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2264f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2264f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2264f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2264fc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2264FCu;
    SET_GPR_U32(ctx, 31, 0x226504u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2264FCu, 0x226504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226504u;
label_226504:
    // 0x226504: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226508: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x226508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x22650c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x22650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x226510: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x226510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226514: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226518: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22651c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22651cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x226520: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226520u, 0x226528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22652c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22652cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x226530: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x226530u;
    {
        const bool branch_taken_0x226530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226530) {
            ctx->pc = 0x226568u;
            return;
        }
    }
    ctx->pc = 0x226538u;
    // 0x226538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22653c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226540: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x226540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x226544: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x226544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22654c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22654cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x226550: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226554: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x226554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226558: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22655c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22655cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x226560: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226564: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x226564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x226568u;
}

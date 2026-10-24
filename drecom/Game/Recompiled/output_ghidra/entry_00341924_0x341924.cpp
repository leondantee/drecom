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

// Function: entry_00341924
// Address: 0x341924 - 0x3419c4
void entry_00341924_0x341924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341924_0x341924");
#endif

    switch (ctx->pc) {
        case 0x341948u: goto label_341948;
        default: break;
    }

    ctx->pc = 0x341924u;

    // 0x341924: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x341924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34192c: 0x8444006a  lh          $a0, 0x6A($v0)
    ctx->pc = 0x34192cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x341930: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x341930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341934: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x341934u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x341938: 0x4c10022  bgez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x341938u;
    {
        const bool branch_taken_0x341938 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x341938) {
            ctx->pc = 0x3419C4u;
            return;
        }
    }
    ctx->pc = 0x341940u;
    // 0x341940: 0xc067694  jal         func_19DA50
    ctx->pc = 0x341940u;
    SET_GPR_U32(ctx, 31, 0x341948u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x341940u, 0x341948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341948u;
label_341948:
    // 0x341948: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x341948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34194c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x34194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x341950: 0x2464001e  addiu       $a0, $v1, 0x1E
    ctx->pc = 0x341950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x341954: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x341954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341958: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x341958u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x34195c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34195cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341960: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x341960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x341964: 0xa466006a  sh          $a2, 0x6A($v1)
    ctx->pc = 0x341964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 6));
    // 0x341968: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x341968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34196c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341970: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x341970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x341974: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x341974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x341978: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x341978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x34197c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341980: 0x9464000e  lhu         $a0, 0xE($v1)
    ctx->pc = 0x341980u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x341984: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x341984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x341988: 0xa465000e  sh          $a1, 0xE($v1)
    ctx->pc = 0x341988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x34198c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341990: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x341990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x341994: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x341994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x341998: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34199c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x34199cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419a0: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x3419a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x3419a4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3419a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3419ac: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3419b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3419b4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3419b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3419b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3419b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3419bc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3419BCu;
    {
        const bool branch_taken_0x3419bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3419bc) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x3419C4u;
}

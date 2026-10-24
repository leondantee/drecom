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

// Function: entry_002db930
// Address: 0x2db930 - 0x2db9a0
void entry_002db930_0x2db930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db930_0x2db930");
#endif

    switch (ctx->pc) {
        case 0x2db954u: goto label_2db954;
        case 0x2db97cu: goto label_2db97c;
        default: break;
    }

    ctx->pc = 0x2db930u;

    // 0x2db930: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2db930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db934: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db938: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2db938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db93c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2db93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2db940: 0x24060a02  addiu       $a2, $zero, 0xA02
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x2db944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db948: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db94c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DB94Cu;
    SET_GPR_U32(ctx, 31, 0x2DB954u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DB94Cu, 0x2DB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB954u;
label_2db954:
    // 0x2db954: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db958: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2db958u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db95c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db960: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2db960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db964: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db968: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db96c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB96Cu;
    {
        const bool branch_taken_0x2db96c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2db96c) {
            ctx->pc = 0x2DB9A0u;
            return;
        }
    }
    ctx->pc = 0x2DB974u;
    // 0x2db974: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB974u;
    SET_GPR_U32(ctx, 31, 0x2DB97Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB974u, 0x2DB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB97Cu;
label_2db97c:
    // 0x2db97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db980: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2db980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2db984: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB984u;
    {
        const bool branch_taken_0x2db984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db984) {
            ctx->pc = 0x2DB9C4u;
            return;
        }
    }
    ctx->pc = 0x2DB98Cu;
    // 0x2db98c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2db994: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2db994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2db998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DB998u;
    {
        const bool branch_taken_0x2db998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db998) {
            ctx->pc = 0x2DB9C4u;
            return;
        }
    }
    ctx->pc = 0x2DB9A0u;
}

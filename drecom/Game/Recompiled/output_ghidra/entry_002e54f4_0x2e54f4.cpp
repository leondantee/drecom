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

// Function: entry_002e54f4
// Address: 0x2e54f4 - 0x2e5560
void entry_002e54f4_0x2e54f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e54f4_0x2e54f4");
#endif

    switch (ctx->pc) {
        case 0x2e5500u: goto label_2e5500;
        case 0x2e5518u: goto label_2e5518;
        default: break;
    }

    ctx->pc = 0x2e54f4u;

    // 0x2e54f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E54F8u;
    SET_GPR_U32(ctx, 31, 0x2E5500u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E54F8u, 0x2E5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5500u;
label_2e5500:
    // 0x2e5500: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5504: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2e5504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2e5508: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E5508u;
    {
        const bool branch_taken_0x2e5508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5508) {
            ctx->pc = 0x2E5594u;
            return;
        }
    }
    ctx->pc = 0x2E5510u;
    // 0x2e5510: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E5510u;
    SET_GPR_U32(ctx, 31, 0x2E5518u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E5510u, 0x2E5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5518u;
label_2e5518:
    // 0x2e5518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e5518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e551c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e5520: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5520u;
    {
        const bool branch_taken_0x2e5520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5520) {
            ctx->pc = 0x2E5560u;
            return;
        }
    }
    ctx->pc = 0x2E5528u;
    // 0x2e5528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e552c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5530: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e5534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e5538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e553c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e553cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5544: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5548: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e554c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e554cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5550: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5554: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5558: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E5558u;
    {
        const bool branch_taken_0x2e5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5558) {
            ctx->pc = 0x2E558Cu;
            return;
        }
    }
    ctx->pc = 0x2E5560u;
}

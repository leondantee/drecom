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

// Function: entry_0030d000
// Address: 0x30d000 - 0x30d068
void entry_0030d000_0x30d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d000_0x30d000");
#endif

    switch (ctx->pc) {
        case 0x30d030u: goto label_30d030;
        default: break;
    }

    ctx->pc = 0x30d000u;

    // 0x30d000: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d004: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30d008: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d00c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d010: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30d010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30d014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30d018: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d01c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30d020: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d024: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d028: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30D028u;
    SET_GPR_U32(ctx, 31, 0x30D030u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30D028u, 0x30D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D030u;
label_30d030:
    // 0x30d030: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30D030u;
    {
        const bool branch_taken_0x30d030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d030) {
            ctx->pc = 0x30D068u;
            return;
        }
    }
    ctx->pc = 0x30D038u;
    // 0x30d038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d03c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d044: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d048: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d04c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d058: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d05c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d060: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30d068u;
}

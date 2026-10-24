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

// Function: entry_001291f4
// Address: 0x1291f4 - 0x129278
void entry_001291f4_0x1291f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001291f4_0x1291f4");
#endif

    switch (ctx->pc) {
        case 0x129208u: goto label_129208;
        case 0x129224u: goto label_129224;
        default: break;
    }

    ctx->pc = 0x1291f4u;

    // 0x1291f4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1291f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1291f8: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1291F8u;
    {
        const bool branch_taken_0x1291f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291f8) {
            ctx->pc = 0x1292A8u;
            return;
        }
    }
    ctx->pc = 0x129200u;
    // 0x129200: 0xc067694  jal         func_19DA50
    ctx->pc = 0x129200u;
    SET_GPR_U32(ctx, 31, 0x129208u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x129200u, 0x129208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129208u;
label_129208:
    // 0x129208: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x129208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12920c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12920cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x129210: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x129210u;
    {
        const bool branch_taken_0x129210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x129210) {
            ctx->pc = 0x129278u;
            return;
        }
    }
    ctx->pc = 0x129218u;
    // 0x129218: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12921c: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x12921Cu;
    SET_GPR_U32(ctx, 31, 0x129224u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12921Cu, 0x129224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129224u;
label_129224:
    // 0x129224: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x129224u;
    {
        const bool branch_taken_0x129224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129224) {
            ctx->pc = 0x1292A8u;
            return;
        }
    }
    ctx->pc = 0x12922Cu;
    // 0x12922c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129238: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x129238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12923c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12924c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129254: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12925c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12925cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129260: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x129264: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x129264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x129268: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x129268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12926c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12926cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x129270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x129270u;
    {
        const bool branch_taken_0x129270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129270) {
            ctx->pc = 0x1292A8u;
            return;
        }
    }
    ctx->pc = 0x129278u;
}

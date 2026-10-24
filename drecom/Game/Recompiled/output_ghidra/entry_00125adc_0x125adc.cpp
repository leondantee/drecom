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

// Function: entry_00125adc
// Address: 0x125adc - 0x125b60
void entry_00125adc_0x125adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125adc_0x125adc");
#endif

    switch (ctx->pc) {
        case 0x125af0u: goto label_125af0;
        case 0x125b0cu: goto label_125b0c;
        default: break;
    }

    ctx->pc = 0x125adcu;

    // 0x125adc: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125ae0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x125AE0u;
    {
        const bool branch_taken_0x125ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ae0) {
            ctx->pc = 0x125B90u;
            return;
        }
    }
    ctx->pc = 0x125AE8u;
    // 0x125ae8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x125AE8u;
    SET_GPR_U32(ctx, 31, 0x125AF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x125AE8u, 0x125AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125AF0u;
label_125af0:
    // 0x125af0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x125af4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x125af8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x125AF8u;
    {
        const bool branch_taken_0x125af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125af8) {
            ctx->pc = 0x125B60u;
            return;
        }
    }
    ctx->pc = 0x125B00u;
    // 0x125b00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b04: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x125B04u;
    SET_GPR_U32(ctx, 31, 0x125B0Cu);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x125B04u, 0x125B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125B0Cu;
label_125b0c:
    // 0x125b0c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x125B0Cu;
    {
        const bool branch_taken_0x125b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b0c) {
            ctx->pc = 0x125B90u;
            return;
        }
    }
    ctx->pc = 0x125B14u;
    // 0x125b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125b18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125b20: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x125b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x125b24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125b38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125b44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125b48: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x125b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x125b4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x125b50: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x125b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x125b54: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x125b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x125b58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x125B58u;
    {
        const bool branch_taken_0x125b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125b58) {
            ctx->pc = 0x125B90u;
            return;
        }
    }
    ctx->pc = 0x125B60u;
}

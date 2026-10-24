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

// Function: entry_00363b44
// Address: 0x363b44 - 0x363bd4
void entry_00363b44_0x363b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363b44_0x363b44");
#endif

    switch (ctx->pc) {
        case 0x363b8cu: goto label_363b8c;
        default: break;
    }

    ctx->pc = 0x363b44u;

    // 0x363b44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x363b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x363b4c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x363B4Cu;
    {
        const bool branch_taken_0x363b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b4c) {
            ctx->pc = 0x363D20u;
            return;
        }
    }
    ctx->pc = 0x363B54u;
    // 0x363b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b58: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363b5c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x363b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x363b60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363b64: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x363B64u;
    {
        const bool branch_taken_0x363b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b64) {
            ctx->pc = 0x363CD8u;
            return;
        }
    }
    ctx->pc = 0x363B6Cu;
    // 0x363b6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b70: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x363b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x363b74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x363b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x363b78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x363b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x363b7c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x363B7Cu;
    {
        const bool branch_taken_0x363b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363b7c) {
            ctx->pc = 0x363BD4u;
            return;
        }
    }
    ctx->pc = 0x363B84u;
    // 0x363b84: 0xc067694  jal         func_19DA50
    ctx->pc = 0x363B84u;
    SET_GPR_U32(ctx, 31, 0x363B8Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x363B84u, 0x363B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B8Cu;
label_363b8c:
    // 0x363b8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363b90: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x363b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x363b94: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x363B94u;
    {
        const bool branch_taken_0x363b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363b94) {
            ctx->pc = 0x363BD4u;
            return;
        }
    }
    ctx->pc = 0x363B9Cu;
    // 0x363b9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ba4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363ba8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x363ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363bac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363bb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363bbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363bc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363bc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363bcc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x363BCCu;
    {
        const bool branch_taken_0x363bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363bcc) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363BD4u;
}

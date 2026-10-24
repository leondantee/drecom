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

// Function: entry_0033aedc
// Address: 0x33aedc - 0x33af24
void entry_0033aedc_0x33aedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033aedc_0x33aedc");
#endif

    ctx->pc = 0x33aedcu;

    // 0x33aedc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x33aee0: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AEE0u;
    {
        const bool branch_taken_0x33aee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aee0) {
            ctx->pc = 0x33AF24u;
            return;
        }
    }
    ctx->pc = 0x33AEE8u;
    // 0x33aee8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x33aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x33aeec: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33AEECu;
    {
        const bool branch_taken_0x33aeec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aeec) {
            ctx->pc = 0x33AF24u;
            return;
        }
    }
    ctx->pc = 0x33AEF4u;
    // 0x33aef4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x33aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x33aef8: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33AEF8u;
    {
        const bool branch_taken_0x33aef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aef8) {
            ctx->pc = 0x33AF24u;
            return;
        }
    }
    ctx->pc = 0x33AF00u;
    // 0x33af00: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x33af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x33af04: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33AF04u;
    {
        const bool branch_taken_0x33af04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af04) {
            ctx->pc = 0x33AF24u;
            return;
        }
    }
    ctx->pc = 0x33AF0Cu;
    // 0x33af0c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x33af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x33af10: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AF10u;
    {
        const bool branch_taken_0x33af10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33af10) {
            ctx->pc = 0x33AF24u;
            return;
        }
    }
    ctx->pc = 0x33AF18u;
    // 0x33af18: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x33af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x33af1c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF1Cu;
    {
        const bool branch_taken_0x33af1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x33af1c) {
            ctx->pc = 0x33AF40u;
            return;
        }
    }
    ctx->pc = 0x33AF24u;
}

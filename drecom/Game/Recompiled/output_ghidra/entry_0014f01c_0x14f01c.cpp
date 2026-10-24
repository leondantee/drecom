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

// Function: entry_0014f01c
// Address: 0x14f01c - 0x14f070
void entry_0014f01c_0x14f01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f01c_0x14f01c");
#endif

    ctx->pc = 0x14f01cu;

    // 0x14f01c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14f020: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14f024: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x14f028: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x14F028u;
    {
        const bool branch_taken_0x14f028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f028) {
            ctx->pc = 0x14F220u;
            return;
        }
    }
    ctx->pc = 0x14F030u;
    // 0x14f030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f034: 0x904213a6  lbu         $v0, 0x13A6($v0)
    ctx->pc = 0x14f034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5030)));
    // 0x14f038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14f038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14f03c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f040: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F040u;
    {
        const bool branch_taken_0x14f040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f040) {
            ctx->pc = 0x14F070u;
            return;
        }
    }
    ctx->pc = 0x14F048u;
    // 0x14f048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f04c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F04Cu;
    {
        const bool branch_taken_0x14f04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f04c) {
            ctx->pc = 0x14F070u;
            return;
        }
    }
    ctx->pc = 0x14F054u;
    // 0x14f054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f058: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F058u;
    {
        const bool branch_taken_0x14f058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f058) {
            ctx->pc = 0x14F070u;
            return;
        }
    }
    ctx->pc = 0x14F060u;
    // 0x14f060: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F060u;
    {
        const bool branch_taken_0x14f060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f060) {
            ctx->pc = 0x14F070u;
            return;
        }
    }
    ctx->pc = 0x14F068u;
    // 0x14f068: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F068u;
    {
        const bool branch_taken_0x14f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f068) {
            ctx->pc = 0x14F070u;
            return;
        }
    }
    ctx->pc = 0x14F070u;
}

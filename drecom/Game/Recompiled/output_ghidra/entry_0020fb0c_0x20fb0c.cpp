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

// Function: entry_0020fb0c
// Address: 0x20fb0c - 0x20fb48
void entry_0020fb0c_0x20fb0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fb0c_0x20fb0c");
#endif

    ctx->pc = 0x20fb0cu;

label_20fb0c:
    // 0x20fb0c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20fb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fb10: 0xae450060  sw          $a1, 0x60($s2)
    ctx->pc = 0x20fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 5));
    // 0x20fb14: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fb18: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x20fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
    // 0x20fb1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20fb20: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x20fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x20fb24: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x20fb24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x20fb28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x20fb28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x20fb2c: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x20fb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fb30: 0x94c70052  lhu         $a3, 0x52($a2)
    ctx->pc = 0x20fb30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 82)));
    // 0x20fb34: 0x30e8ffff  andi        $t0, $a3, 0xFFFF
    ctx->pc = 0x20fb34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x20fb38: 0x2c8482b  sltu        $t1, $s6, $t0
    ctx->pc = 0x20fb38u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x20fb3c: 0x1520fff3  bnez        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x20FB3Cu;
    {
        const bool branch_taken_0x20fb3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fb3c) {
            ctx->pc = 0x20FB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb0c;
        }
    }
    ctx->pc = 0x20FB44u;
    // 0x20fb44: 0x0  nop
    ctx->pc = 0x20fb44u;
    // NOP
    ctx->pc = 0x20fb48u;
}

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

// Function: entry_0022f020
// Address: 0x22f020 - 0x22f068
void entry_0022f020_0x22f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f020_0x22f020");
#endif

    ctx->pc = 0x22f020u;

    // 0x22f020: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f024: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x22f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22f028: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x22f028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x22f02c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f030: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x22f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22f034: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x22f034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x22f038: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22f038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22f03c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f040: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x22f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f044: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F044u;
    {
        const bool branch_taken_0x22f044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f044) {
            ctx->pc = 0x22F068u;
            return;
        }
    }
    ctx->pc = 0x22F04Cu;
    // 0x22f04c: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x22f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22f050: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x22f050u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22f054: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22f058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f05c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F05Cu;
    {
        const bool branch_taken_0x22f05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f05c) {
            ctx->pc = 0x22F068u;
            return;
        }
    }
    ctx->pc = 0x22F064u;
    // 0x22f064: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22f064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22f068u;
}

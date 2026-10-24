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

// Function: entry_00267068
// Address: 0x267068 - 0x267094
void entry_00267068_0x267068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267068_0x267068");
#endif

    ctx->pc = 0x267068u;

    // 0x267068: 0x32a4ffff  andi        $a0, $s5, 0xFFFF
    ctx->pc = 0x267068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x26706c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x26706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x267070: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x267070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267074: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x267074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x267078: 0x1460fea8  bnez        $v1, . + 4 + (-0x158 << 2)
    ctx->pc = 0x267078u;
    {
        const bool branch_taken_0x267078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267078) {
            ctx->pc = 0x266B1Cu;
            return;
        }
    }
    ctx->pc = 0x267080u;
    // 0x267080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x267080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267084: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x267084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x267088: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x267088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26708c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26708cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x267090: 0xa024e650  sb          $a0, -0x19B0($at)
    ctx->pc = 0x267090u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
    ctx->pc = 0x267094u;
}

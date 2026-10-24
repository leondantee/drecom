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

// Function: entry_00259354
// Address: 0x259354 - 0x259374
void entry_00259354_0x259354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259354_0x259354");
#endif

    ctx->pc = 0x259354u;

    // 0x259354: 0x93a300c0  lbu         $v1, 0xC0($sp)
    ctx->pc = 0x259354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x259358: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25935c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259360: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x259360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x259364: 0x8c730024  lw          $s3, 0x24($v1)
    ctx->pc = 0x259364u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x259368: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x259368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x25936c: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x25936cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x259370: 0x0  nop
    ctx->pc = 0x259370u;
    // NOP
    ctx->pc = 0x259374u;
}

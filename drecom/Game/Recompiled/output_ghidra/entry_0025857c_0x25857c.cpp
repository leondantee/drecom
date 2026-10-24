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

// Function: entry_0025857c
// Address: 0x25857c - 0x258598
void entry_0025857c_0x25857c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025857c_0x25857c");
#endif

    ctx->pc = 0x25857cu;

    // 0x25857c: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x25857cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x258580: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x258584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258588: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25858c: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x25858cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258590: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x258594: 0x0  nop
    ctx->pc = 0x258594u;
    // NOP
    ctx->pc = 0x258598u;
}

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

// Function: entry_00257114
// Address: 0x257114 - 0x25716c
void entry_00257114_0x257114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257114_0x257114");
#endif

    ctx->pc = 0x257114u;

    // 0x257114: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257118: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x257118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25711c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257120: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x257120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x257124: 0x3464000f  ori         $a0, $v1, 0xF
    ctx->pc = 0x257124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x257128: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25712c: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x25712cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x257130: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257134: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x257134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x257138: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x257138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x25713c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257140: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x257140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x257144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257148: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x257148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x25714c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x25714cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x257150: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x257150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257154: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x257154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x257158: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25715c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x25715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x257160: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x257160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x257164: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x257164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257168: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x257168u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x25716cu;
}

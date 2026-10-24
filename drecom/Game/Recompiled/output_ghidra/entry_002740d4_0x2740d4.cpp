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

// Function: entry_002740d4
// Address: 0x2740d4 - 0x274128
void entry_002740d4_0x2740d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002740d4_0x2740d4");
#endif

    ctx->pc = 0x2740d4u;

    // 0x2740d4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740d8: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2740d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740dc: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2740dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2740e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2740e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2740e4: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2740e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2740ec: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x2740ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x2740f0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2740f4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2740f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2740f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2740f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2740fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2740fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274100: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274108: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x274108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x27410c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x274110: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274114: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274118: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27411c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x27411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274124: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x274124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    ctx->pc = 0x274128u;
}

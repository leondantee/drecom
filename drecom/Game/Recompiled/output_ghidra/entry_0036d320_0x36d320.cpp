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

// Function: entry_0036d320
// Address: 0x36d320 - 0x36d350
void entry_0036d320_0x36d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d320_0x36d320");
#endif

    ctx->pc = 0x36d320u;

    // 0x36d320: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d324: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36d324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d328: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x36d328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d32c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d330: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36d334: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36d334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d338: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x36d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x36d33c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d340: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x36d340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x36d344: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x36d344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x36d348: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x36d348u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d34c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x36d350u;
}

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

// Function: entry_0037a874
// Address: 0x37a874 - 0x37a8a0
void entry_0037a874_0x37a874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a874_0x37a874");
#endif

    ctx->pc = 0x37a874u;

    // 0x37a874: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37a874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37a878: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a87c: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37a880: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x37a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a884: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x37a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x37a888: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a88c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a890: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x37a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x37a894: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x37a894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37a898: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x37a898u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a89c: 0x0  nop
    ctx->pc = 0x37a89cu;
    // NOP
    ctx->pc = 0x37a8a0u;
}

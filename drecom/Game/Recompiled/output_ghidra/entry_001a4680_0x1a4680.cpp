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

// Function: entry_001a4680
// Address: 0x1a4680 - 0x1a46e4
void entry_001a4680_0x1a4680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4680_0x1a4680");
#endif

    ctx->pc = 0x1a4680u;

    // 0x1a4680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4684: 0x80630310  lb          $v1, 0x310($v1)
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x1a4688: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a468c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a468cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4690: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A4690u;
    {
        const bool branch_taken_0x1a4690 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4690) {
            ctx->pc = 0x1A46E4u;
            return;
        }
    }
    ctx->pc = 0x1A4698u;
    // 0x1a4698: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a469c: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a469cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a46a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46a4: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a46a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a46a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A46A8u;
    {
        const bool branch_taken_0x1a46a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a46a8) {
            ctx->pc = 0x1A46E4u;
            return;
        }
    }
    ctx->pc = 0x1A46B0u;
    // 0x1a46b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46b4: 0x806302b0  lb          $v1, 0x2B0($v1)
    ctx->pc = 0x1a46b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x1a46b8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a46b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a46bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a46bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a46c0: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A46C0u;
    {
        const bool branch_taken_0x1a46c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a46c0) {
            ctx->pc = 0x1A46E4u;
            return;
        }
    }
    ctx->pc = 0x1A46C8u;
    // 0x1a46c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46cc: 0x808302b0  lb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1a46d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a46d4: 0xa08302b0  sb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a46d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a46dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46e0: 0xa0640310  sb          $a0, 0x310($v1)
    ctx->pc = 0x1a46e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a46e4u;
}

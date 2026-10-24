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

// Function: entry_0013e328
// Address: 0x13e328 - 0x13e388
void entry_0013e328_0x13e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e328_0x13e328");
#endif

    switch (ctx->pc) {
        case 0x13e34cu: goto label_13e34c;
        default: break;
    }

    ctx->pc = 0x13e328u;

    // 0x13e328: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13e32c: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x13e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13e330: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13e334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e338: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x13e338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x13e33c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13e340: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x13e340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x13e344: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x13E344u;
    SET_GPR_U32(ctx, 31, 0x13E34Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x13E34Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13E34Cu) { return; }
    ctx->pc = 0x13E34Cu;
label_13e34c:
    // 0x13e34c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e350: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13e354: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13e358: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x13e358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13e35c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e364: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e368: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13e368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e36c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e370: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x13e374: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x13e378: 0x246378b0  addiu       $v1, $v1, 0x78B0
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30896));
    // 0x13e37c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x13e37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13e380: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x13e380u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x13e384: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x13e384u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13e388u;
}

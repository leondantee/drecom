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

// Function: entry_0017f338
// Address: 0x17f338 - 0x17f378
void entry_0017f338_0x17f338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f338_0x17f338");
#endif

    switch (ctx->pc) {
        case 0x17f36cu: goto label_17f36c;
        default: break;
    }

    ctx->pc = 0x17f338u;

    // 0x17f338: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x17f338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17f33c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17f33cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17f340: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17f340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17f344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f348: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x17f348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17f34c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17f350: 0x24431380  addiu       $v1, $v0, 0x1380
    ctx->pc = 0x17f350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17f354: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f358: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f35c: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f360: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x17f360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x17f364: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F364u;
    SET_GPR_U32(ctx, 31, 0x17F36Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F36Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F36Cu) { return; }
    ctx->pc = 0x17F36Cu;
label_17f36c:
    // 0x17f36c: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x17f370: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f370u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f374: 0x0  nop
    ctx->pc = 0x17f374u;
    // NOP
    ctx->pc = 0x17f378u;
}

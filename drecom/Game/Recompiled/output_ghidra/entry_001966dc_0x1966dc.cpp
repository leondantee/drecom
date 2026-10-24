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

// Function: entry_001966dc
// Address: 0x1966dc - 0x19673c
void entry_001966dc_0x1966dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001966dc_0x1966dc");
#endif

    switch (ctx->pc) {
        case 0x196710u: goto label_196710;
        default: break;
    }

    ctx->pc = 0x1966dcu;

    // 0x1966dc: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x1966dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1966e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1966e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1966e4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1966e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1966e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1966ec: 0x94630206  lhu         $v1, 0x206($v1)
    ctx->pc = 0x1966ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 518)));
    // 0x1966f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1966f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1966f4: 0x16e40011  bne         $s7, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1966F4u;
    {
        const bool branch_taken_0x1966f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        if (branch_taken_0x1966f4) {
            ctx->pc = 0x19673Cu;
            return;
        }
    }
    ctx->pc = 0x1966FCu;
    // 0x1966fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1966fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196700: 0x24641240  addiu       $a0, $v1, 0x1240
    ctx->pc = 0x196700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x196704: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x196704u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x196708: 0xc040ec4  jal         func_103B10
    ctx->pc = 0x196708u;
    SET_GPR_U32(ctx, 31, 0x196710u);
    ctx->pc = 0x103B10u;
    {
        ctx->pc = 0x196710u;
        ps2_stubs::sceVu0CopyVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x196710u) { return; }
    ctx->pc = 0x196710u;
label_196710:
    // 0x196710: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x196710u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196714: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x196718: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19671c: 0xac831274  sw          $v1, 0x1274($a0)
    ctx->pc = 0x19671cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4724), GPR_U32(ctx, 3));
    // 0x196720: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x196720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x196724: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x196724u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x196728: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19672c: 0x24831260  addiu       $v1, $a0, 0x1260
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4704));
    // 0x196730: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x196730u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x196734: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x196734u;
    {
        const bool branch_taken_0x196734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196734) {
            ctx->pc = 0x196760u;
            return;
        }
    }
    ctx->pc = 0x19673Cu;
}

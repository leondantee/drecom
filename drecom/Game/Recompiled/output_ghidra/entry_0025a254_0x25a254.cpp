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

// Function: entry_0025a254
// Address: 0x25a254 - 0x25a2b4
void entry_0025a254_0x25a254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a254_0x25a254");
#endif

    switch (ctx->pc) {
        case 0x25a290u: goto label_25a290;
        default: break;
    }

    ctx->pc = 0x25a254u;

label_25a254:
    // 0x25a254: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x25a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25a258: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x25a258u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a25c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a260: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x25a260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x25a264: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a268: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a26c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a270: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a274: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25a274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25a278: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25a27c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25a27cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a280: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x25a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x25a284: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x25a284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x25a288: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25A288u;
    SET_GPR_U32(ctx, 31, 0x25A290u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25A290u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25A290u) { return; }
    ctx->pc = 0x25A290u;
label_25a290:
    // 0x25a290: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25a290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25a294: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a298: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25a298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25a29c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a2a0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25a2a4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25A2A4u;
    {
        const bool branch_taken_0x25a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a2a4) {
            ctx->pc = 0x25A254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a254;
        }
    }
    ctx->pc = 0x25A2ACu;
    // 0x25a2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A2ACu;
    {
        const bool branch_taken_0x25a2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a2ac) {
            ctx->pc = 0x25A2C8u;
            return;
        }
    }
    ctx->pc = 0x25A2B4u;
}

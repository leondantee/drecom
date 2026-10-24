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

// Function: entry_002e0170
// Address: 0x2e0170 - 0x2e0208
void entry_002e0170_0x2e0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0170_0x2e0170");
#endif

    switch (ctx->pc) {
        case 0x2e0184u: goto label_2e0184;
        case 0x2e0198u: goto label_2e0198;
        case 0x2e01acu: goto label_2e01ac;
        default: break;
    }

    ctx->pc = 0x2e0170u;

    // 0x2e0170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0174: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2e0178: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2e0178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2e017c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E017Cu;
    SET_GPR_U32(ctx, 31, 0x2E0184u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E0184u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E0184u) { return; }
    ctx->pc = 0x2E0184u;
label_2e0184:
    // 0x2e0184: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0188: 0x24440170  addiu       $a0, $v0, 0x170
    ctx->pc = 0x2e0188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x2e018c: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x2e018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2e0190: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E0190u;
    SET_GPR_U32(ctx, 31, 0x2E0198u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E0198u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E0198u) { return; }
    ctx->pc = 0x2E0198u;
label_2e0198:
    // 0x2e0198: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e019c: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2e019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2e01a0: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x2e01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2e01a4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2E01A4u;
    SET_GPR_U32(ctx, 31, 0x2E01ACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2E01ACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E01ACu) { return; }
    ctx->pc = 0x2E01ACu;
label_2e01ac:
    // 0x2e01ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e01b4: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x2e01b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x2e01b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e01bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2e01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e01c4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2e01c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e01c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e01cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e01d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01d4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x2e01d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e01d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e01dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e01e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e01e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2e01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e01e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e01ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e01f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e01f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e01f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e01fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e01fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0200: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0204: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2e0208u;
}

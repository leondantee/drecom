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

// Function: entry_001ff024
// Address: 0x1ff024 - 0x1ff09c
void entry_001ff024_0x1ff024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff024_0x1ff024");
#endif

    switch (ctx->pc) {
        case 0x1ff06cu: goto label_1ff06c;
        case 0x1ff088u: goto label_1ff088;
        default: break;
    }

    ctx->pc = 0x1ff024u;

    // 0x1ff024: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff028: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x1ff028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x1ff02c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff030: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ff030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ff034: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FF034u;
    {
        const bool branch_taken_0x1ff034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff034) {
            ctx->pc = 0x1FF09Cu;
            return;
        }
    }
    ctx->pc = 0x1FF03Cu;
    // 0x1ff03c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff040: 0x94830340  lhu         $v1, 0x340($a0)
    ctx->pc = 0x1ff040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 832)));
    // 0x1ff044: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1ff044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1ff048: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x1ff048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1ff04c: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF04Cu;
    {
        const bool branch_taken_0x1ff04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff04c) {
            ctx->pc = 0x1FF09Cu;
            return;
        }
    }
    ctx->pc = 0x1FF054u;
    // 0x1ff054: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff058: 0x8fb200d8  lw          $s2, 0xD8($sp)
    ctx->pc = 0x1ff058u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff05c: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1ff05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1ff060: 0x8e450320  lw          $a1, 0x320($s2)
    ctx->pc = 0x1ff060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x1ff064: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FF064u;
    SET_GPR_U32(ctx, 31, 0x1FF06Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FF06Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF06Cu) { return; }
    ctx->pc = 0x1FF06Cu;
label_1ff06c:
    // 0x1ff06c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff06cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff070: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff074: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff078: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x1ff078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1ff07c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff080: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FF080u;
    SET_GPR_U32(ctx, 31, 0x1FF088u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FF088u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF088u) { return; }
    ctx->pc = 0x1FF088u;
label_1ff088:
    // 0x1ff088: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff088u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff08c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1ff08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1ff090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff094: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff098: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1ff098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->pc = 0x1ff09cu;
}

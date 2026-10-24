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

// Function: entry_001fd034
// Address: 0x1fd034 - 0x1fd0bc
void entry_001fd034_0x1fd034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd034_0x1fd034");
#endif

    switch (ctx->pc) {
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd094u: goto label_1fd094;
        default: break;
    }

    ctx->pc = 0x1fd034u;

    // 0x1fd034: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd038: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1fd038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1fd03c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fd03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fd040: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fd040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fd044: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD044u;
    {
        const bool branch_taken_0x1fd044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd044) {
            ctx->pc = 0x1FD0BCu;
            return;
        }
    }
    ctx->pc = 0x1FD04Cu;
    // 0x1fd04c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd050: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd054: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fd054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fd058: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fd05c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FD05Cu;
    SET_GPR_U32(ctx, 31, 0x1FD064u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FD064u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD064u) { return; }
    ctx->pc = 0x1FD064u;
label_1fd064:
    // 0x1fd064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd068: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd06c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd070: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd074: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd078: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd07c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd084: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fd088: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fd08c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FD08Cu;
    SET_GPR_U32(ctx, 31, 0x1FD094u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FD094u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FD094u) { return; }
    ctx->pc = 0x1FD094u;
label_1fd094:
    // 0x1fd094: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fd098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd09c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0a0: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fd0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fd0a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fd0a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fd0ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd0b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd0b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1fd0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1fd0b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fd0bcu;
}

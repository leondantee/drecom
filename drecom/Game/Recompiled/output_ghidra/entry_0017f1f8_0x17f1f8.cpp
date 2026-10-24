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

// Function: entry_0017f1f8
// Address: 0x17f1f8 - 0x17f288
void entry_0017f1f8_0x17f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1f8_0x17f1f8");
#endif

    switch (ctx->pc) {
        case 0x17f244u: goto label_17f244;
        case 0x17f268u: goto label_17f268;
        default: break;
    }

    ctx->pc = 0x17f1f8u;

    // 0x17f1f8: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x17f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17f1fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17f1fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17f200: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x17f200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17f204: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17F204u;
    {
        const bool branch_taken_0x17f204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f204) {
            ctx->pc = 0x17F1DCu;
            return;
        }
    }
    ctx->pc = 0x17F20Cu;
    // 0x17f20c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17f20cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17f210: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f214: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f218: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17f218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f21c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17f21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17f220: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x17f220u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f224: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17f228: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x17f228u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f22c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17f230: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x17f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f234: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17f238: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f23c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x17F23Cu;
    SET_GPR_U32(ctx, 31, 0x17F244u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x17F244u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F244u) { return; }
    ctx->pc = 0x17F244u;
label_17f244:
    // 0x17f244: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x17f244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x17f248: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x17f248u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f24c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x17f24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17f250: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x17f250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x17f254: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x17f254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x17f258: 0x2465ed30  addiu       $a1, $v1, -0x12D0
    ctx->pc = 0x17f258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962480));
    // 0x17f25c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f260: 0xc046ba6  jal         func_11AE98
    ctx->pc = 0x17F260u;
    SET_GPR_U32(ctx, 31, 0x17F268u);
    ctx->pc = 0x11AE98u;
    {
        ctx->pc = 0x17F268u;
        ps2_stubs::strncmp(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17F268u) { return; }
    ctx->pc = 0x17F268u;
label_17f268:
    // 0x17f268: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17f268u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17f26c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F26Cu;
    {
        const bool branch_taken_0x17f26c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f26c) {
            ctx->pc = 0x17F288u;
            return;
        }
    }
    ctx->pc = 0x17F274u;
    // 0x17f274: 0x93a3006f  lbu         $v1, 0x6F($sp)
    ctx->pc = 0x17f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 111)));
    // 0x17f278: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17f278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f27c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x17f27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x17f280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F280u;
    {
        const bool branch_taken_0x17f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f280) {
            ctx->pc = 0x17F290u;
            return;
        }
    }
    ctx->pc = 0x17F288u;
}

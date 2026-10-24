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

// Function: entry_002613ac
// Address: 0x2613ac - 0x26140c
void entry_002613ac_0x2613ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002613ac_0x2613ac");
#endif

    switch (ctx->pc) {
        case 0x2613c8u: goto label_2613c8;
        default: break;
    }

    ctx->pc = 0x2613acu;

    // 0x2613ac: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613b0: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2613b4: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x2613b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2613b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2613bc: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x2613bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2613c0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2613C0u;
    SET_GPR_U32(ctx, 31, 0x2613C8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2613C8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2613C8u) { return; }
    ctx->pc = 0x2613C8u;
label_2613c8:
    // 0x2613c8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613cc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2613ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2613d0: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x2613d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2613d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2613d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2613d8: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x2613d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x2613dc: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613e0: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x2613e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x2613e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2613e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2613e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2613e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2613ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2613ECu;
    {
        const bool branch_taken_0x2613ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2613ec) {
            ctx->pc = 0x26140Cu;
            return;
        }
    }
    ctx->pc = 0x2613F4u;
    // 0x2613f4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x2613f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2613f8: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x2613f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x2613fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2613fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261400: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261404u;
    {
        const bool branch_taken_0x261404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261404) {
            ctx->pc = 0x261420u;
            return;
        }
    }
    ctx->pc = 0x26140Cu;
}

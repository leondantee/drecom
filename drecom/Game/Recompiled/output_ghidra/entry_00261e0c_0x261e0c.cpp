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

// Function: entry_00261e0c
// Address: 0x261e0c - 0x261e6c
void entry_00261e0c_0x261e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261e0c_0x261e0c");
#endif

    switch (ctx->pc) {
        case 0x261e28u: goto label_261e28;
        default: break;
    }

    ctx->pc = 0x261e0cu;

    // 0x261e0c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e10: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261e14: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x261e18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x261e18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x261e1c: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x261e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x261e20: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x261E20u;
    SET_GPR_U32(ctx, 31, 0x261E28u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x261E28u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x261E28u) { return; }
    ctx->pc = 0x261E28u;
label_261e28:
    // 0x261e28: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e2c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x261e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261e30: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x261e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261e34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x261e38: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x261e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x261e3c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e40: 0x944209e0  lhu         $v0, 0x9E0($v0)
    ctx->pc = 0x261e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2528)));
    // 0x261e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261e48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x261e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x261e4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x261E4Cu;
    {
        const bool branch_taken_0x261e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261e4c) {
            ctx->pc = 0x261E6Cu;
            return;
        }
    }
    ctx->pc = 0x261E54u;
    // 0x261e54: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261e58: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x261e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x261e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x261e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x261e60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261e64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261E64u;
    {
        const bool branch_taken_0x261e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261e64) {
            ctx->pc = 0x261E80u;
            return;
        }
    }
    ctx->pc = 0x261E6Cu;
}

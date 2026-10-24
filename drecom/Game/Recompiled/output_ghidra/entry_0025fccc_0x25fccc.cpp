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

// Function: entry_0025fccc
// Address: 0x25fccc - 0x25fd2c
void entry_0025fccc_0x25fccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025fccc_0x25fccc");
#endif

    switch (ctx->pc) {
        case 0x25fce8u: goto label_25fce8;
        default: break;
    }

    ctx->pc = 0x25fcccu;

    // 0x25fccc: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fcd0: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x25fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x25fcd4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25fcd8: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x25fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25fcdc: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x25fcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x25fce0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x25FCE0u;
    SET_GPR_U32(ctx, 31, 0x25FCE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x25FCE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25FCE8u) { return; }
    ctx->pc = 0x25FCE8u;
label_25fce8:
    // 0x25fce8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fcec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x25fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25fcf0: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x25fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fcf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25fcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25fcf8: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x25fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x25fcfc: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fd00: 0x948209e0  lhu         $v0, 0x9E0($a0)
    ctx->pc = 0x25fd00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x25fd04: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25fd08: 0x30450008  andi        $a1, $v0, 0x8
    ctx->pc = 0x25fd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25fd0c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FD0Cu;
    {
        const bool branch_taken_0x25fd0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fd0c) {
            ctx->pc = 0x25FD2Cu;
            return;
        }
    }
    ctx->pc = 0x25FD14u;
    // 0x25fd14: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25fd18: 0x904409da  lbu         $a0, 0x9DA($v0)
    ctx->pc = 0x25fd18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x25fd1c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x25fd1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x25fd20: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x25fd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x25fd24: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FD24u;
    {
        const bool branch_taken_0x25fd24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fd24) {
            ctx->pc = 0x25FD40u;
            return;
        }
    }
    ctx->pc = 0x25FD2Cu;
}

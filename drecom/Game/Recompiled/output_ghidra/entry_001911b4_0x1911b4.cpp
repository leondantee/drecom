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

// Function: entry_001911b4
// Address: 0x1911b4 - 0x191234
void entry_001911b4_0x1911b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911b4_0x1911b4");
#endif

    switch (ctx->pc) {
        case 0x1911f4u: goto label_1911f4;
        case 0x19121cu: goto label_19121c;
        default: break;
    }

    ctx->pc = 0x1911b4u;

    // 0x1911b4: 0x8e2201fc  lw          $v0, 0x1FC($s1)
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x1911b8: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x1911bc: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1911c0: 0x92220210  lbu         $v0, 0x210($s1)
    ctx->pc = 0x1911c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1911c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1911c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1911c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1911cc: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1911d0: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1911d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1911d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1911d8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1911dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1911dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1911e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1911e4: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1911e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1911e8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1911e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1911ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1911ECu;
    SET_GPR_U32(ctx, 31, 0x1911F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1911F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1911F4u) { return; }
    ctx->pc = 0x1911F4u;
label_1911f4:
    // 0x1911f4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1911f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1911f8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1911f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1911fc: 0x96220118  lhu         $v0, 0x118($s1)
    ctx->pc = 0x1911fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x191200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x191204: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x191208: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191208u;
    {
        const bool branch_taken_0x191208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191208) {
            ctx->pc = 0x191240u;
            return;
        }
    }
    ctx->pc = 0x191210u;
    // 0x191210: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x191210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x191214: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x191214u;
    SET_GPR_U32(ctx, 31, 0x19121Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x191214u, 0x19121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19121Cu;
label_19121c:
    // 0x19121c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x19121cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x191220: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x191220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x191224: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x191224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191228: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191228u;
    {
        const bool branch_taken_0x191228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191228) {
            ctx->pc = 0x191234u;
            return;
        }
    }
    ctx->pc = 0x191230u;
    // 0x191230: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x191230u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x191234u;
}

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

// Function: entry_0013f4ac
// Address: 0x13f4ac - 0x13f568
void entry_0013f4ac_0x13f4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f4ac_0x13f4ac");
#endif

    switch (ctx->pc) {
        case 0x13f4d0u: goto label_13f4d0;
        case 0x13f4e0u: goto label_13f4e0;
        case 0x13f4f8u: goto label_13f4f8;
        case 0x13f50cu: goto label_13f50c;
        case 0x13f534u: goto label_13f534;
        case 0x13f564u: goto label_13f564;
        default: break;
    }

    ctx->pc = 0x13f4acu;

    // 0x13f4ac: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4b0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f4b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f4b8: 0x27be0150  addiu       $fp, $sp, 0x150
    ctx->pc = 0x13f4b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13f4bc: 0x73c03628  paddub      $a2, $fp, $zero
    ctx->pc = 0x13f4bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x13f4c0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f4c4: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f4c8: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F4C8u;
    SET_GPR_U32(ctx, 31, 0x13F4D0u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F4C8u, 0x13F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4D0u;
label_13f4d0:
    // 0x13f4d0: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x13f4d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F4D8u;
    SET_GPR_U32(ctx, 31, 0x13F4E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F4E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F4E0u) { return; }
    ctx->pc = 0x13F4E0u;
label_13f4e0:
    // 0x13f4e0: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4e4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13f4e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f4e8: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4ec: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f4f0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F4F0u;
    SET_GPR_U32(ctx, 31, 0x13F4F8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F4F8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F4F8u) { return; }
    ctx->pc = 0x13F4F8u;
label_13f4f8:
    // 0x13f4f8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f4fc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f500: 0x27a51590  addiu       $a1, $sp, 0x1590
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5520));
    // 0x13f504: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F504u;
    SET_GPR_U32(ctx, 31, 0x13F50Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F50Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F50Cu) { return; }
    ctx->pc = 0x13F50Cu;
label_13f50c:
    // 0x13f50c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x13f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f510: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f514: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x13f514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x13f518: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f51c: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x13f520: 0xafa716a8  sw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 7));
    // 0x13f524: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f528: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f52c: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F52Cu;
    SET_GPR_U32(ctx, 31, 0x13F534u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F52Cu, 0x13F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F534u;
label_13f534:
    // 0x13f534: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f534u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f538: 0x32020820  andi        $v0, $s0, 0x820
    ctx->pc = 0x13f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13f53c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F53Cu;
    {
        const bool branch_taken_0x13f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f53c) {
            ctx->pc = 0x13F568u;
            return;
        }
    }
    ctx->pc = 0x13F544u;
    // 0x13f544: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x13f548: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13f548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f54c: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f550: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f554: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13f554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13f558: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f55c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F55Cu;
    SET_GPR_U32(ctx, 31, 0x13F564u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F55Cu, 0x13F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F564u;
label_13f564:
    // 0x13f564: 0x0  nop
    ctx->pc = 0x13f564u;
    // NOP
    ctx->pc = 0x13f568u;
}

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

// Function: entry_002f8688
// Address: 0x2f8688 - 0x2f8724
void entry_002f8688_0x2f8688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8688_0x2f8688");
#endif

    switch (ctx->pc) {
        case 0x2f8690u: goto label_2f8690;
        case 0x2f8700u: goto label_2f8700;
        default: break;
    }

    ctx->pc = 0x2f8688u;

    // 0x2f8688: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8688u;
    SET_GPR_U32(ctx, 31, 0x2F8690u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8688u, 0x2F8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8690u;
label_2f8690:
    // 0x2f8690: 0x3c0a40a0  lui         $t2, 0x40A0
    ctx->pc = 0x2f8690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8694: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2f8694u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8698: 0x0  nop
    ctx->pc = 0x2f8698u;
    // NOP
    // 0x2f869c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f869cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f86a0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f86a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f86a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f86a8: 0x0  nop
    ctx->pc = 0x2f86a8u;
    // NOP
    // 0x2f86ac: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f86acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f86b0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f86b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2f86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f86b8: 0x2605000b  addiu       $a1, $s0, 0xB
    ctx->pc = 0x2f86b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f86bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f86c0: 0x2608000e  addiu       $t0, $s0, 0xE
    ctx->pc = 0x2f86c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2f86c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f86c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f86c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f86cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f86d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f86d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f86d4: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f86d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f86dc: 0x24461a80  addiu       $a2, $v0, 0x1A80
    ctx->pc = 0x2f86dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f86e0: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f86e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f86e4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f86e8: 0x24691b00  addiu       $t1, $v1, 0x1B00
    ctx->pc = 0x2f86e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
    // 0x2f86ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f86f0: 0x244a1a80  addiu       $t2, $v0, 0x1A80
    ctx->pc = 0x2f86f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 6784));
    // 0x2f86f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f86f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f86f8: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F86F8u;
    SET_GPR_U32(ctx, 31, 0x2F8700u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F86F8u, 0x2F8700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8700u;
label_2f8700:
    // 0x2f8700: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f8700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f8704: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x2f8704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f8708: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f870c: 0xa0670100  sb          $a3, 0x100($v1)
    ctx->pc = 0x2f870cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f8710: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2f8710u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8714: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8718: 0xa0690101  sb          $t1, 0x101($v1)
    ctx->pc = 0x2f8718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f871c: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x2F871Cu;
    {
        const bool branch_taken_0x2f871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f871c) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8724u;
}

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

// Function: entry_002e7598
// Address: 0x2e7598 - 0x2e7604
void entry_002e7598_0x2e7598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7598_0x2e7598");
#endif

    switch (ctx->pc) {
        case 0x2e75ccu: goto label_2e75cc;
        default: break;
    }

    ctx->pc = 0x2e7598u;

    // 0x2e7598: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2e7598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
    // 0x2e759c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x2e759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e75a0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2e75a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e75a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e75a8: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e75a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e75ac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e75acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e75b0: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2e75b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e75b4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2e75b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e75b8: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2e75b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e75bc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2e75bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e75c0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2e75c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e75c4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E75C4u;
    SET_GPR_U32(ctx, 31, 0x2E75CCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E75C4u, 0x2E75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75CCu;
label_2e75cc:
    // 0x2e75cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e75d0: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e75d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e75d4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e75d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e75d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e75dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e75dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e75e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E75E0u;
    {
        const bool branch_taken_0x2e75e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e75e0) {
            ctx->pc = 0x2E7604u;
            return;
        }
    }
    ctx->pc = 0x2E75E8u;
    // 0x2e75e8: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x2e75ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e75ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e75f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e75f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e75f4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e75f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2e75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e75fc: 0xc0c9144  jal         func_324510
    ctx->pc = 0x2E75FCu;
    SET_GPR_U32(ctx, 31, 0x2E7604u);
    ctx->pc = 0x324510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324510u, 0x2E75FCu, 0x2E7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7604u;
}

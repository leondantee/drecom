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

// Function: entry_001c082c
// Address: 0x1c082c - 0x1c08c0
void entry_001c082c_0x1c082c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c082c_0x1c082c");
#endif

    switch (ctx->pc) {
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0868u: goto label_1c0868;
        case 0x1c087cu: goto label_1c087c;
        default: break;
    }

    ctx->pc = 0x1c082cu;

    // 0x1c082c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0830: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0834: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0834u;
    SET_GPR_U32(ctx, 31, 0x1C083Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0834u, 0x1C083Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C083Cu;
label_1c083c:
    // 0x1c083c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0840: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0840u;
    SET_GPR_U32(ctx, 31, 0x1C0848u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0840u, 0x1C0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0848u;
label_1c0848:
    // 0x1c0848: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c084c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0854: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0854u;
    SET_GPR_U32(ctx, 31, 0x1C085Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0854u, 0x1C085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C085Cu;
label_1c085c:
    // 0x1c085c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0860: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0860u;
    SET_GPR_U32(ctx, 31, 0x1C0868u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0860u, 0x1C0868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0868u;
label_1c0868:
    // 0x1c0868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c086c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0870: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0874: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C0874u;
    SET_GPR_U32(ctx, 31, 0x1C087Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C0874u, 0x1C087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C087Cu;
label_1c087c:
    // 0x1c087c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C087Cu;
    {
        const bool branch_taken_0x1c087c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c087c) {
            ctx->pc = 0x1C0920u;
            return;
        }
    }
    ctx->pc = 0x1C0884u;
    // 0x1c0884: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c0884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0888: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c0888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c088c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C088Cu;
    {
        const bool branch_taken_0x1c088c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c088c) {
            ctx->pc = 0x1C08C0u;
            return;
        }
    }
    ctx->pc = 0x1C0894u;
    // 0x1c0894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0898: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c089c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c08a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c08a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c08a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C08A4u;
    {
        const bool branch_taken_0x1c08a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c08a4) {
            ctx->pc = 0x1C08C0u;
            return;
        }
    }
    ctx->pc = 0x1C08ACu;
    // 0x1c08ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c08acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c08b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c08b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c08b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c08b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c08b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c08bc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c08c0u;
}

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

// Function: entry_002d9928
// Address: 0x2d9928 - 0x2d99b8
void entry_002d9928_0x2d9928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9928_0x2d9928");
#endif

    switch (ctx->pc) {
        case 0x2d9954u: goto label_2d9954;
        case 0x2d997cu: goto label_2d997c;
        default: break;
    }

    ctx->pc = 0x2d9928u;

    // 0x2d9928: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2d992c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9938: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2d9938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2d993c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9940: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2d9940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9944: 0x24640244  addiu       $a0, $v1, 0x244
    ctx->pc = 0x2d9944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 580));
    // 0x2d9948: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2d994c: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2D994Cu;
    SET_GPR_U32(ctx, 31, 0x2D9954u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2D994Cu, 0x2D9954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9954u;
label_2d9954:
    // 0x2d9954: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2d9954u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d9958: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x2d9958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2d995c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x2d995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d9960: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d9964: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d9964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d9968: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d996c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9970: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x2d9970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d9974: 0xc0759c4  jal         func_1D6710
    ctx->pc = 0x2D9974u;
    SET_GPR_U32(ctx, 31, 0x2D997Cu);
    ctx->pc = 0x1D6710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6710u, 0x2D9974u, 0x2D997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D997Cu;
label_2d997c:
    // 0x2d997c: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x2d997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9980: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x2d9980u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x2d9984: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2d9984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2d9988: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2d9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2d998c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2d998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2d9990: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2d9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d9994: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x2d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x2d9998: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x2d999c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d99a0: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x2d99a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x2d99a4: 0x24023001  addiu       $v0, $zero, 0x3001
    ctx->pc = 0x2d99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d99a8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x2d99a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x2d99ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d99b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d99b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d99b4: 0x0  nop
    ctx->pc = 0x2d99b4u;
    // NOP
    ctx->pc = 0x2d99b8u;
}

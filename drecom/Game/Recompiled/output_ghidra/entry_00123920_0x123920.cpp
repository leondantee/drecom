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

// Function: entry_00123920
// Address: 0x123920 - 0x1239b0
void entry_00123920_0x123920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123920_0x123920");
#endif

    switch (ctx->pc) {
        case 0x123970u: goto label_123970;
        default: break;
    }

    ctx->pc = 0x123920u;

    // 0x123920: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123924: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x123928: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
    // 0x12392c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x12392cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123930: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x123930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123934: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x123934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x123938: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x12393c: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x12393cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x123940: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x123940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x123944: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x123944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x123948: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x123948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12394c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x12394cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x123950: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x123950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x123954: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x123954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x123958: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x12395c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x12395cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x123960: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x123960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x123964: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x123964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x123968: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x123968u;
    SET_GPR_U32(ctx, 31, 0x123970u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x123968u, 0x123970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123970u;
label_123970:
    // 0x123970: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x123970u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x123974: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x123978: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x123978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x12397c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x12397cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x123980: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x123980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x123984: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x123984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x123988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x12398c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x12398cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x123990: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x123990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x123994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x123994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x123998: 0x24450ae8  addiu       $a1, $v0, 0xAE8
    ctx->pc = 0x123998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x12399c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12399cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1239a0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1239a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1239a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1239a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1239a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1239a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1239ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1239acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1239b0u;
}

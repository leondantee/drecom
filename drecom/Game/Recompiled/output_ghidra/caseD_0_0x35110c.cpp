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

// Function: caseD_0
// Address: 0x35110c - 0x3511bc
void caseD_0_0x35110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x35110c");
#endif

    switch (ctx->pc) {
        case 0x351138u: goto label_351138;
        default: break;
    }

    ctx->pc = 0x35110cu;

    // 0x35110c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351114: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x351114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x351118: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35111c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351120: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x351120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x351124: 0x24060f1e  addiu       $a2, $zero, 0xF1E
    ctx->pc = 0x351124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
    // 0x351128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x351128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35112c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35112cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x351130: 0xc0965d0  jal         func_259740
    ctx->pc = 0x351130u;
    SET_GPR_U32(ctx, 31, 0x351138u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x351130u, 0x351138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351138u;
label_351138:
    // 0x351138: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351138u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35113c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351140: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351144: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x351148: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x351148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x35114c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x35114cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x351150: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351154: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x351154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x351158: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x351158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x35115c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x35115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x351160: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x351160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x351164: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x351168: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x351168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35116c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x35116cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x351170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351174: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x351174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x351178: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x351178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x35117c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35117cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x351180: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x351180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x351184: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x351184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    // 0x351188: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35118c: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x35118cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x351190: 0x24703840  addiu       $s0, $v1, 0x3840
    ctx->pc = 0x351190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x351194: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x351194u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x351198: 0x30a3fff7  andi        $v1, $a1, 0xFFF7
    ctx->pc = 0x351198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65527);
    // 0x35119c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x35119cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3511a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3511a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3511a4: 0x0  nop
    ctx->pc = 0x3511a4u;
    // NOP
    // 0x3511a8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3511a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3511ac: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x3511acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3511b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3511b4: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x3511b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3511b8: 0xa0640078  sb          $a0, 0x78($v1)
    ctx->pc = 0x3511b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3511bcu;
}

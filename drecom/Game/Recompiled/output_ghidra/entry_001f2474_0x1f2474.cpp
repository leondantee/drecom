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

// Function: entry_001f2474
// Address: 0x1f2474 - 0x1f2528
void entry_001f2474_0x1f2474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2474_0x1f2474");
#endif

    switch (ctx->pc) {
        case 0x1f2488u: goto label_1f2488;
        case 0x1f249cu: goto label_1f249c;
        default: break;
    }

    ctx->pc = 0x1f2474u;

    // 0x1f2474: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f2474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2478: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f2478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f247c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f2480: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F2480u;
    SET_GPR_U32(ctx, 31, 0x1F2488u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F2480u, 0x1F2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2488u;
label_1f2488:
    // 0x1f2488: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1f2488u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f248c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x1f248cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2490: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1f2490u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f2494: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2494u;
    SET_GPR_U32(ctx, 31, 0x1F249Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2494u, 0x1F249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F249Cu;
label_1f249c:
    // 0x1f249c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24a0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x1f24a4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f24a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f24a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f24a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f24ac: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f24b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f24b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f24b4: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f24b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1f24b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f24bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f24c0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F24C0u;
    {
        const bool branch_taken_0x1f24c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f24c0) {
            ctx->pc = 0x1F2528u;
            return;
        }
    }
    ctx->pc = 0x1F24C8u;
    // 0x1f24c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f24cc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f24ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24d0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1f24d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f24d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f24d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24dc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1f24dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f24e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f24e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f24ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f24f0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f24f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f24f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f24f8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f24fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2500: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f2500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2504: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2508: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f250c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f250cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f2510: 0x2406ff47  addiu       $a2, $zero, -0xB9
    ctx->pc = 0x1f2510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f2514: 0xa63824  and         $a3, $a1, $a2
    ctx->pc = 0x1f2514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1f2518: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1f2518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1f251c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f251cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2520: 0x8fa800b8  lw          $t0, 0xB8($sp)
    ctx->pc = 0x1f2520u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2524: 0xe50000d0  swc1        $f0, 0xD0($t0)
    ctx->pc = 0x1f2524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    ctx->pc = 0x1f2528u;
}

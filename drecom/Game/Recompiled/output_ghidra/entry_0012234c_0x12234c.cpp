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

// Function: entry_0012234c
// Address: 0x12234c - 0x122418
void entry_0012234c_0x12234c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012234c_0x12234c");
#endif

    switch (ctx->pc) {
        case 0x1223c8u: goto label_1223c8;
        default: break;
    }

    ctx->pc = 0x12234cu;

    // 0x12234c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122350: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x122354: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x122354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x122358: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x122358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x12235c: 0x1480002e  bnez        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x12235Cu;
    {
        const bool branch_taken_0x12235c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12235c) {
            ctx->pc = 0x122418u;
            return;
        }
    }
    ctx->pc = 0x122364u;
    // 0x122364: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122368: 0x94a311f4  lhu         $v1, 0x11F4($a1)
    ctx->pc = 0x122368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4596)));
    // 0x12236c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x12236cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x122370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122374: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x122374u;
    {
        const bool branch_taken_0x122374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x122374) {
            ctx->pc = 0x122418u;
            return;
        }
    }
    ctx->pc = 0x12237Cu;
    // 0x12237c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x12237cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122380: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x122384: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x122384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x122388: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x122388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x12238c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x12238cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x122390: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122394: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x122394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x122398: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x12239c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12239cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1223a0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1223a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1223a4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1223a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1223a8: 0xc4a111f8  lwc1        $f1, 0x11F8($a1)
    ctx->pc = 0x1223a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1223ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1223acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1223b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1223b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1223b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1223b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1223b8: 0x0  nop
    ctx->pc = 0x1223b8u;
    // NOP
    // 0x1223bc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1223bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1223c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1223C0u;
    SET_GPR_U32(ctx, 31, 0x1223C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1223C0u, 0x1223C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223C8u;
label_1223c8:
    // 0x1223c8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1223c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1223cc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1223ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1223d0: 0x90c509df  lbu         $a1, 0x9DF($a2)
    ctx->pc = 0x1223d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x1223d4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1223d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1223d8: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1223d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1223dc: 0x14800254  bnez        $a0, . + 4 + (0x254 << 2)
    ctx->pc = 0x1223DCu;
    {
        const bool branch_taken_0x1223dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1223dc) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x1223E4u;
    // 0x1223e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1223e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1223e8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1223ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1223ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1223f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1223f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1223f4: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1223f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1223f8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1223f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1223fc: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x1223fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122400: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122404: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122404u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122408: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12240c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12240cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122410: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x122410u;
    {
        const bool branch_taken_0x122410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122410) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122418u;
}

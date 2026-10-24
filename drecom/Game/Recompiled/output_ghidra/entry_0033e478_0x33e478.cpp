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

// Function: entry_0033e478
// Address: 0x33e478 - 0x33e560
void entry_0033e478_0x33e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e478_0x33e478");
#endif

    switch (ctx->pc) {
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e518u: goto label_33e518;
        default: break;
    }

    ctx->pc = 0x33e478u;

    // 0x33e478: 0x2e22001f  sltiu       $v0, $s1, 0x1F
    ctx->pc = 0x33e478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33e47c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x33E47Cu;
    {
        const bool branch_taken_0x33e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e47c) {
            ctx->pc = 0x33E400u;
            return;
        }
    }
    ctx->pc = 0x33E484u;
    // 0x33e484: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x33e488: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33e488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33e48c: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x33e48cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x33e490: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x33e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x33e494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e498: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e49c: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x33e49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x33e4a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33e4a8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x33e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33e4ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33e4b0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33e4b4: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33E4B4u;
    SET_GPR_U32(ctx, 31, 0x33E4BCu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33E4B4u, 0x33E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4BCu;
label_33e4bc:
    // 0x33e4bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33e4c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e4c4: 0x0  nop
    ctx->pc = 0x33e4c4u;
    // NOP
    // 0x33e4c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33e4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33e4cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4d0: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x33e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x33e4d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33e4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33e4d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33e4dc: 0x24439f80  addiu       $v1, $v0, -0x6080
    ctx->pc = 0x33e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942592));
    // 0x33e4e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4e4: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x33e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x33e4e8: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x33e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x33e4ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4f0: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x33e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x33e4f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x33e4f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e4fc: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x33e4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e504: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e508: 0xa04310a9  sb          $v1, 0x10A9($v0)
    ctx->pc = 0x33e508u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4265), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e50c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e510: 0xc0cfc5c  jal         func_33F170
    ctx->pc = 0x33E510u;
    SET_GPR_U32(ctx, 31, 0x33E518u);
    ctx->pc = 0x33F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F170u, 0x33E510u, 0x33E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E518u;
label_33e518:
    // 0x33e518: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33e518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33e51c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33e520: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x33e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x33e524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33e528: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33e52c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x33e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x33e530: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e534: 0xac641250  sw          $a0, 0x1250($v1)
    ctx->pc = 0x33e534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 4));
    // 0x33e538: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e53c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x33e53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x33e540: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33e544: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33e548: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E548u;
    {
        const bool branch_taken_0x33e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e548) {
            ctx->pc = 0x33E560u;
            return;
        }
    }
    ctx->pc = 0x33E550u;
    // 0x33e550: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33e550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33e554: 0x24649f60  addiu       $a0, $v1, -0x60A0
    ctx->pc = 0x33e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942560));
    // 0x33e558: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33e55c: 0xac641250  sw          $a0, 0x1250($v1)
    ctx->pc = 0x33e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 4));
    ctx->pc = 0x33e560u;
}

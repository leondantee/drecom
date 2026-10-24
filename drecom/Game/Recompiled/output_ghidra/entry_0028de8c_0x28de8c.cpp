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

// Function: entry_0028de8c
// Address: 0x28de8c - 0x28df84
void entry_0028de8c_0x28de8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028de8c_0x28de8c");
#endif

    switch (ctx->pc) {
        case 0x28df54u: goto label_28df54;
        default: break;
    }

    ctx->pc = 0x28de8cu;

    // 0x28de8c: 0x92066624  lbu         $a2, 0x6624($s0)
    ctx->pc = 0x28de8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28de90: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28de90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28de94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28de98: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28DE98u;
    {
        const bool branch_taken_0x28de98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28de98) {
            ctx->pc = 0x28DF84u;
            return;
        }
    }
    ctx->pc = 0x28DEA0u;
    // 0x28dea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dea4: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28dea8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28deac: 0xa2025dfc  sb          $v0, 0x5DFC($s0)
    ctx->pc = 0x28deacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 2));
    // 0x28deb0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28deb4: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x28deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28deb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28deb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28debc: 0x0  nop
    ctx->pc = 0x28debcu;
    // NOP
    // 0x28dec0: 0xe6005df0  swc1        $f0, 0x5DF0($s0)
    ctx->pc = 0x28dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24048), bits); }
    // 0x28dec4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x28dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28dec8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28dec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28decc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28deccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ded0: 0x0  nop
    ctx->pc = 0x28ded0u;
    // NOP
    // 0x28ded4: 0xe6005df4  swc1        $f0, 0x5DF4($s0)
    ctx->pc = 0x28ded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24052), bits); }
    // 0x28ded8: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28dedc: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x28dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28dee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28dee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dee4: 0x0  nop
    ctx->pc = 0x28dee4u;
    // NOP
    // 0x28dee8: 0xe6005df8  swc1        $f0, 0x5DF8($s0)
    ctx->pc = 0x28dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24056), bits); }
    // 0x28deec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x28deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28def0: 0xae025db0  sw          $v0, 0x5DB0($s0)
    ctx->pc = 0x28def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 2));
    // 0x28def4: 0x3c023ecd  lui         $v0, 0x3ECD
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16077 << 16));
    // 0x28def8: 0x3442e32f  ori         $v0, $v0, 0xE32F
    ctx->pc = 0x28def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58159);
    // 0x28defc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28defcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df00: 0x0  nop
    ctx->pc = 0x28df00u;
    // NOP
    // 0x28df04: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28df04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28df08: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x28df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x28df0c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x28df0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x28df10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28df10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28df14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df18: 0xe42027e4  swc1        $f0, 0x27E4($at)
    ctx->pc = 0x28df18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6227E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6227E4u, _value); } while (0); }
    // 0x28df1c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x28df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x28df20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df24: 0xa02327e8  sb          $v1, 0x27E8($at)
    ctx->pc = 0x28df24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6227E8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6227E8u, _value); } while (0);
    // 0x28df28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28df2c: 0x2442615c  addiu       $v0, $v0, 0x615C
    ctx->pc = 0x28df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24924));
    // 0x28df30: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df34: 0xac222800  sw          $v0, 0x2800($at)
    ctx->pc = 0x28df34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622800u, _value); } while (0);
    // 0x28df38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x28df3c: 0x24442808  addiu       $a0, $v0, 0x2808
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10248));
    // 0x28df40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28df44: 0x2445e910  addiu       $a1, $v0, -0x16F0
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
    // 0x28df48: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x28df48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28df4c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x28DF4Cu;
    SET_GPR_U32(ctx, 31, 0x28DF54u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x28DF54u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28DF54u) { return; }
    ctx->pc = 0x28DF54u;
label_28df54:
    // 0x28df54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df58: 0xa4202830  sh          $zero, 0x2830($at)
    ctx->pc = 0x28df58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622830u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622830u, _value); } while (0);
    // 0x28df5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df60: 0xa4202832  sh          $zero, 0x2832($at)
    ctx->pc = 0x28df60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622832u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622832u, _value); } while (0);
    // 0x28df64: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x28df64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x28df68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df6c: 0xa4232834  sh          $v1, 0x2834($at)
    ctx->pc = 0x28df6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622834u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622834u, _value); } while (0);
    // 0x28df70: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x28df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x28df74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28df74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28df78: 0xa4222836  sh          $v0, 0x2836($at)
    ctx->pc = 0x28df78u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622836u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x622836u, _value); } while (0);
    // 0x28df7c: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28DF7Cu;
    SET_GPR_U32(ctx, 31, 0x28DF84u);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28DF7Cu, 0x28DF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF84u;
}

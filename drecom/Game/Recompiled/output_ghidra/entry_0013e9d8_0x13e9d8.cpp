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

// Function: entry_0013e9d8
// Address: 0x13e9d8 - 0x13ea68
void entry_0013e9d8_0x13e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e9d8_0x13e9d8");
#endif

    switch (ctx->pc) {
        case 0x13ea00u: goto label_13ea00;
        case 0x13ea14u: goto label_13ea14;
        default: break;
    }

    ctx->pc = 0x13e9d8u;

    // 0x13e9d8: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x13e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9dc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x13e9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x13e9e0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x13e9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9e4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13e9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x13e9e8: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x13e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9ec: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x13e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x13e9f0: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13e9f4: 0xa0400240  sb          $zero, 0x240($v0)
    ctx->pc = 0x13e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e9f8: 0xc04f980  jal         func_13E600
    ctx->pc = 0x13E9F8u;
    SET_GPR_U32(ctx, 31, 0x13EA00u);
    ctx->pc = 0x13E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E600u, 0x13E9F8u, 0x13EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA00u;
label_13ea00:
    // 0x13ea00: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x13ea00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x13ea04: 0x3c5f025  or          $fp, $fp, $a1
    ctx->pc = 0x13ea04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 5));
    // 0x13ea08: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13ea0c: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13EA0Cu;
    SET_GPR_U32(ctx, 31, 0x13EA14u);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13EA0Cu, 0x13EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EA14u;
label_13ea14:
    // 0x13ea14: 0x92a50003  lbu         $a1, 0x3($s5)
    ctx->pc = 0x13ea14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x13ea18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x13ea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ea1c: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x13ea1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x13ea20: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x13EA20u;
    {
        const bool branch_taken_0x13ea20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea20) {
            ctx->pc = 0x13EAE0u;
            return;
        }
    }
    ctx->pc = 0x13EA28u;
    // 0x13ea28: 0x1e1bbc  dsll32      $v1, $fp, 14
    ctx->pc = 0x13ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 14));
    // 0x13ea2c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x13ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x13ea30: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x13EA30u;
    {
        const bool branch_taken_0x13ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea30) {
            ctx->pc = 0x13EAE0u;
            return;
        }
    }
    ctx->pc = 0x13EA38u;
    // 0x13ea38: 0x33c3003f  andi        $v1, $fp, 0x3F
    ctx->pc = 0x13ea38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)63);
    // 0x13ea3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13EA3Cu;
    {
        const bool branch_taken_0x13ea3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea3c) {
            ctx->pc = 0x13EA68u;
            return;
        }
    }
    ctx->pc = 0x13EA44u;
    // 0x13ea44: 0x33c30fc0  andi        $v1, $fp, 0xFC0
    ctx->pc = 0x13ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4032);
    // 0x13ea48: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13EA48u;
    {
        const bool branch_taken_0x13ea48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ea48) {
            ctx->pc = 0x13EA68u;
            return;
        }
    }
    ctx->pc = 0x13EA50u;
    // 0x13ea50: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x13ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x13ea54: 0x34c7f000  ori         $a3, $a2, 0xF000
    ctx->pc = 0x13ea54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)61440);
    // 0x13ea58: 0x3c72824  and         $a1, $fp, $a3
    ctx->pc = 0x13ea58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & GPR_U64(ctx, 7));
    // 0x13ea5c: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x13EA5Cu;
    {
        const bool branch_taken_0x13ea5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea5c) {
            ctx->pc = 0x13EAE0u;
            return;
        }
    }
    ctx->pc = 0x13EA64u;
    // 0x13ea64: 0x0  nop
    ctx->pc = 0x13ea64u;
    // NOP
    ctx->pc = 0x13ea68u;
}

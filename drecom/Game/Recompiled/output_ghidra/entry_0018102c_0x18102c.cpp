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

// Function: entry_0018102c
// Address: 0x18102c - 0x181164
void entry_0018102c_0x18102c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018102c_0x18102c");
#endif

    ctx->pc = 0x18102cu;

    // 0x18102c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181030: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181030u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181034: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181038: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18103c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18103cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181040: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181044: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181048: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18104c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181050: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181054: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x181054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181058: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18105c: 0xe420f1f0  swc1        $f0, -0xE10($at)
    ctx->pc = 0x18105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F0u, _value); } while (0); }
    // 0x181060: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181064: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181068: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18106c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18106cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181070: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181074: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181078: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18107c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181080: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181084: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x181084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181088: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x181088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18108c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181090: 0xe420f1f8  swc1        $f0, -0xE08($at)
    ctx->pc = 0x181090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1F8u, _value); } while (0); }
    // 0x181094: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181098: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181098u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18109c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18109cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1810a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1810a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1810a4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1810a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1810a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1810a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1810ac: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1810acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1810b0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1810b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1810b4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x1810b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1810b8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1810bc: 0xc4c00170  lwc1        $f0, 0x170($a2)
    ctx->pc = 0x1810bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810c4: 0xe420f200  swc1        $f0, -0xE00($at)
    ctx->pc = 0x1810c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F200u, _value); } while (0); }
    // 0x1810c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810cc: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x1810ccu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1810d0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1810d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x1810d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810d8: 0xac20f1e8  sw          $zero, -0xE18($at)
    ctx->pc = 0x1810d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47F1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E8u, _value); } while (0);
    // 0x1810dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810e4: 0xe420f1e0  swc1        $f0, -0xE20($at)
    ctx->pc = 0x1810e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1E0u, _value); } while (0); }
    // 0x1810e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1810f0: 0xe420f1d8  swc1        $f0, -0xE28($at)
    ctx->pc = 0x1810f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F1D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F1D8u, _value); } while (0); }
    // 0x1810f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1810f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1810f8: 0x0  nop
    ctx->pc = 0x1810f8u;
    // NOP
    // 0x1810fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1810fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x181100: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181104: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181108: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x181108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18110c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18110cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181110: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x181114: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x181114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x181118: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18111c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181120: 0x24661380  addiu       $a2, $v1, 0x1380
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181124: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181128: 0x8ce30158  lw          $v1, 0x158($a3)
    ctx->pc = 0x181128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x18112c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18112cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x181130: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x181134: 0xace30158  sw          $v1, 0x158($a3)
    ctx->pc = 0x181134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 3));
    // 0x181138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18113c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181140: 0xace30088  sw          $v1, 0x88($a3)
    ctx->pc = 0x181140u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 3));
    // 0x181144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181148: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18114c: 0xac660094  sw          $a2, 0x94($v1)
    ctx->pc = 0x18114cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 6));
    // 0x181150: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181154: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x181158: 0xac6600b8  sw          $a2, 0xB8($v1)
    ctx->pc = 0x181158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 6));
    // 0x18115c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x18115Cu;
    {
        const bool branch_taken_0x18115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18115c) {
            ctx->pc = 0x181728u;
            return;
        }
    }
    ctx->pc = 0x181164u;
}

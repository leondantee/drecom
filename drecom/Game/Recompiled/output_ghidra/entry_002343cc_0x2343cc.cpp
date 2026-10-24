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

// Function: entry_002343cc
// Address: 0x2343cc - 0x234490
void entry_002343cc_0x2343cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002343cc_0x2343cc");
#endif

    ctx->pc = 0x2343ccu;

    // 0x2343cc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2343ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343d0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x2343d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2343d4: 0x3c043727  lui         $a0, 0x3727
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14119 << 16));
    // 0x2343d8: 0x3484c5ac  ori         $a0, $a0, 0xC5AC
    ctx->pc = 0x2343d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)50604);
    // 0x2343dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2343dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2343e0: 0x0  nop
    ctx->pc = 0x2343e0u;
    // NOP
    // 0x2343e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2343e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2343e8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x2343e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2343ec: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2343f0: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x2343f4: 0x3484999a  ori         $a0, $a0, 0x999A
    ctx->pc = 0x2343f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2343f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2343f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2343fc: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x2343fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234400: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x234400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234404: 0xe6c0001c  swc1        $f0, 0x1C($s6)
    ctx->pc = 0x234404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 28), bits); }
    // 0x234408: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23440c: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x23440cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x234410: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x234414: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x234418: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x234418u;
    {
        const bool branch_taken_0x234418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x234418) {
            ctx->pc = 0x234490u;
            return;
        }
    }
    ctx->pc = 0x234420u;
    // 0x234420: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x234420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x234424: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x234428: 0xae840060  sw          $a0, 0x60($s4)
    ctx->pc = 0x234428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 4));
    // 0x23442c: 0x8e840064  lw          $a0, 0x64($s4)
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x234430: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x234430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x234434: 0xae840064  sw          $a0, 0x64($s4)
    ctx->pc = 0x234434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 4));
    // 0x234438: 0x8e850068  lw          $a1, 0x68($s4)
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x23443c: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x234440: 0xae840068  sw          $a0, 0x68($s4)
    ctx->pc = 0x234440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 4));
    // 0x234444: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x234448: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x234448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x23444c: 0xae650060  sw          $a1, 0x60($s3)
    ctx->pc = 0x23444cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 5));
    // 0x234450: 0x8e660064  lw          $a2, 0x64($s3)
    ctx->pc = 0x234450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x234454: 0x24c40006  addiu       $a0, $a2, 0x6
    ctx->pc = 0x234454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x234458: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x234458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
    // 0x23445c: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x23445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x234460: 0x24a40006  addiu       $a0, $a1, 0x6
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x234464: 0xae640068  sw          $a0, 0x68($s3)
    ctx->pc = 0x234464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 4));
    // 0x234468: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x234468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x23446c: 0x2c850200  sltiu       $a1, $a0, 0x200
    ctx->pc = 0x23446cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x234470: 0x14a00021  bnez        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x234470u;
    {
        const bool branch_taken_0x234470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234470) {
            ctx->pc = 0x2344F8u;
            return;
        }
    }
    ctx->pc = 0x234478u;
    // 0x234478: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23447c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x23447cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x234480: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x234480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x234484: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x234484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x234488: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x234488u;
    {
        const bool branch_taken_0x234488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234488) {
            ctx->pc = 0x2344F8u;
            return;
        }
    }
    ctx->pc = 0x234490u;
}

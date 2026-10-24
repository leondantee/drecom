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

// Function: entry_002332b0
// Address: 0x2332b0 - 0x23336c
void entry_002332b0_0x2332b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002332b0_0x2332b0");
#endif

    switch (ctx->pc) {
        case 0x2332b8u: goto label_2332b8;
        default: break;
    }

    ctx->pc = 0x2332b0u;

    // 0x2332b0: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x2332B0u;
    SET_GPR_U32(ctx, 31, 0x2332B8u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x2332B0u, 0x2332B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2332b8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2332bc: 0x3a630001  xori        $v1, $s3, 0x1
    ctx->pc = 0x2332bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x2332c0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2332c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2332c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2332c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2332c8: 0x16630028  bne         $s3, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2332C8u;
    {
        const bool branch_taken_0x2332c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2332c8) {
            ctx->pc = 0x23336Cu;
            return;
        }
    }
    ctx->pc = 0x2332D0u;
    // 0x2332d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2332d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2332d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2332d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2332dc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2332dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2332e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2332e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2332e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2332e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2332ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2332ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2332f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2332f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2332f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2332f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2332f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2332fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2332fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x233300: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x233300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233304: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233308: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x233308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x23330c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x233310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233314: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233318: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x233318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x23331c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x23331cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x233320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233324: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233328: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x233328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x23332c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x233330: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x233330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x233334: 0xa064001d  sb          $a0, 0x1D($v1)
    ctx->pc = 0x233334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 4));
    // 0x233338: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x23333c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23333cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x233340: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x233340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x233344: 0x2472ec70  addiu       $s2, $v1, -0x1390
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x233348: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x23334c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23334cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233350: 0x0  nop
    ctx->pc = 0x233350u;
    // NOP
    // 0x233354: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x233354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED40u, _value); } while (0); }
    // 0x233358: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x233358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EED44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EED44u, _value); } while (0); }
    // 0x23335c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233360: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x233360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x233364: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x233364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x233368: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x233368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23336cu;
}

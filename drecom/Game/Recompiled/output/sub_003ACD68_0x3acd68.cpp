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

// Function: sub_003ACD68
// Address: 0x3acd68 - 0x3ace10
void sub_003ACD68_0x3acd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACD68_0x3acd68");
#endif

    ctx->pc = 0x3acd68u;

    // 0x3acd68: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x3acd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3acd6c: 0x72646320  .word       0x72646320                   # madd1       $t4, $s3, $a0 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acd6cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3acd70: 0x20646165  addi        $a0, $v1, 0x6165
    ctx->pc = 0x3acd70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acd74: 0xa646d63  j           func_991B58C
    ctx->pc = 0x3ACD74u;
    ctx->pc = 0x991B58Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x991B58Cu, 0x3ACD74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3ACD7Cu;
    // 0x3acd7c: 0x0  nop
    ctx->pc = 0x3acd7cu;
    // NOP
    // 0x3acd80: 0x6d63204e  ldr         $v1, 0x204E($t3)
    ctx->pc = 0x3acd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8270); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3acd84: 0x61772064  daddi       $s7, $t3, 0x2064
    ctx->pc = 0x3acd84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x3acd88: 0xa7469  .word       0x000A7469                   # mtsa        $zero # 000A7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3acd88u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x3acd8c: 0x0  nop
    ctx->pc = 0x3acd8cu;
    // NOP
    // 0x3acd90: 0x6d632053  ldr         $v1, 0x2053($t3)
    ctx->pc = 0x3acd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3acd94: 0x61772064  daddi       $s7, $t3, 0x2064
    ctx->pc = 0x3acd94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
    // 0x3acd98: 0xa7469  .word       0x000A7469                   # mtsa        $zero # 000A7440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3acd98u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x3acd9c: 0x0  nop
    ctx->pc = 0x3acd9cu;
    // NOP
    // 0x3acda0: 0x646d6353  daddiu      $t5, $v1, 0x6353
    ctx->pc = 0x3acda0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25427);
    // 0x3acda4: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x3acda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
    // 0x3acda8: 0x6573206c  daddiu      $s3, $t3, 0x206C
    ctx->pc = 0x3acda8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
    // 0x3acdac: 0x6320616d  daddi       $zero, $t9, 0x616D
    ctx->pc = 0x3acdacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)24941; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3acdb0: 0x635f7275  daddi       $ra, $k0, 0x7275
    ctx->pc = 0x3acdb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x3acdb4: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x3acdb4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
    // 0x3acdb8: 0x656b2064  daddiu      $t3, $t3, 0x2064
    ctx->pc = 0x3acdb8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x3acdbc: 0x635f7065  daddi       $ra, $k0, 0x7065
    ctx->pc = 0x3acdbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)28773; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x3acdc0: 0x253a646d  addiu       $k0, $t1, 0x646D
    ctx->pc = 0x3acdc0u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 25709));
    // 0x3acdc4: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acdc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3acdc8: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3acdc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3acdcc: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3acdccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acdd0: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3acdd0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3acdd4: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acdd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3acdd8: 0x63205320  daddi       $zero, $t9, 0x5320
    ctx->pc = 0x3acdd8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x3acddc: 0xa646d  .word       0x000A646D                   # daddu       $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acddcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 10));
    // 0x3acde0: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3acde0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3acde4: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3acde4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acde8: 0x646e6962  daddiu      $t6, $v1, 0x6962
    ctx->pc = 0x3acde8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
    // 0x3acdec: 0x72726520  .word       0x72726520                   # madd1       $t4, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x3acdecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x3acdf0: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x3acdf0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3acdf4: 0x495f4443  .word       0x495F4443                   # INVALID     $t2, $ra, 0x4443 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3acdf4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x3ACDF4 raw=0x495F4443");
    // 0x3acdf8: 0x2074696e  addi        $s4, $v1, 0x696E
    ctx->pc = 0x3acdf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26990, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x3acdfc: 0xa6425  .word       0x000A6425                   # or          $t4, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3acdfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x3ace00: 0x6362694c  daddi       $v0, $k1, 0x694C
    ctx->pc = 0x3ace00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x3ace04: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x3ace04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x3ace08: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3ace08u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x3ACE08 raw=0x74697845");
    // 0x3ace0c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x3ace0cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x3ace10u;
}

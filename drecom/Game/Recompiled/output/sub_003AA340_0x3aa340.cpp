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

// Function: sub_003AA340
// Address: 0x3aa340 - 0x3aa3e0
void sub_003AA340_0x3aa340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA340_0x3aa340");
#endif

    ctx->pc = 0x3aa340u;

    // 0x3aa340: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa340u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x3AA340 raw=0x00000005");
    // 0x3aa344: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa344u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AA344 raw=0x42C80000");
    // 0x3aa348: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x3aa348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa34c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa34cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x3AA34C raw=0x43480000");
    // 0x3aa350: 0x0  nop
    ctx->pc = 0x3aa350u;
    // NOP
    // 0x3aa354: 0x0  nop
    ctx->pc = 0x3aa354u;
    // NOP
    // 0x3aa358: 0x0  nop
    ctx->pc = 0x3aa358u;
    // NOP
    // 0x3aa35c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa35cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa360: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3aa360u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x3aa364: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa364u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AA364 raw=0x42C80000");
    // 0x3aa368: 0xc37a0000  ll          $k0, 0x0($k1)
    ctx->pc = 0x3aa368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); SET_GPR_S32(ctx, 26, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aa36c: 0x437a0000  .word       0x437A0000                   # INVALID     $k1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aa36cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x3AA36C raw=0x437A0000");
    // 0x3aa370: 0x0  nop
    ctx->pc = 0x3aa370u;
    // NOP
    // 0x3aa374: 0x0  nop
    ctx->pc = 0x3aa374u;
    // NOP
    // 0x3aa378: 0x0  nop
    ctx->pc = 0x3aa378u;
    // NOP
    // 0x3aa37c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa37cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa380: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x3aa380u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x3aa384: 0x0  nop
    ctx->pc = 0x3aa384u;
    // NOP
    // 0x3aa388: 0x0  nop
    ctx->pc = 0x3aa388u;
    // NOP
    // 0x3aa38c: 0x0  nop
    ctx->pc = 0x3aa38cu;
    // NOP
    // 0x3aa390: 0x0  nop
    ctx->pc = 0x3aa390u;
    // NOP
    // 0x3aa394: 0x0  nop
    ctx->pc = 0x3aa394u;
    // NOP
    // 0x3aa398: 0x0  nop
    ctx->pc = 0x3aa398u;
    // NOP
    // 0x3aa39c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa39cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa3a0: 0x8080400  j           func_201000
    ctx->pc = 0x3AA3A0u;
    ctx->pc = 0x3AA3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3A0u;
    // 0x3aa3a4: 0x8060808  j           func_182020 (Delay Slot)
    // J 0x182020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x201000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201000u, 0x3AA3A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AA3A8u;
    // 0x3aa3a8: 0xa060202  j           func_8180808
    ctx->pc = 0x3AA3A8u;
    ctx->pc = 0x3AA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3A8u;
    // 0x3aa3ac: 0x4080f0f  tgei        $zero, 0xF0F (Delay Slot)
    if (GPR_S64(ctx, 0) >= (int64_t)(int32_t)3855) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x8180808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8180808u, 0x3AA3A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AA3B0u;
    // 0x3aa3b0: 0x40f0a08  .word       0x040F0A08                   # INVALID     $zero, $t7, 0xA08 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3b0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x3AA3B0 raw=0x040F0A08");
    // 0x3aa3b4: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3b4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3B4 raw=0x04040404");
    // 0x3aa3b8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3b8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3B8 raw=0x04040404");
    // 0x3aa3bc: 0x6040404  .word       0x06040404                   # INVALID     $s0, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3bcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3BC raw=0x06040404");
    // 0x3aa3c0: 0x32320200  andi        $s2, $s1, 0x200
    ctx->pc = 0x3aa3c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
    // 0x3aa3c4: 0x32323232  andi        $s2, $s1, 0x3232
    ctx->pc = 0x3aa3c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12850);
    // 0x3aa3c8: 0x32040404  andi        $a0, $s0, 0x404
    ctx->pc = 0x3aa3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1028);
    // 0x3aa3cc: 0x8080404  j           func_201010
    ctx->pc = 0x3AA3CCu;
    ctx->pc = 0x3AA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA3CCu;
    // 0x3aa3d0: 0x4040a32  .word       0x04040A32                   # INVALID     $zero, $a0, 0xA32 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3D0 raw=0x04040A32");
    ctx->in_delay_slot = false;
    ctx->pc = 0x201010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201010u, 0x3AA3CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AA3D4u;
    // 0x3aa3d4: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3d4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3D4 raw=0x04040404");
    // 0x3aa3d8: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3d8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3D8 raw=0x04040404");
    // 0x3aa3dc: 0x6040404  .word       0x06040404                   # INVALID     $s0, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x3aa3dcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x3AA3DC raw=0x06040404");
    ctx->pc = 0x3aa3e0u;
}

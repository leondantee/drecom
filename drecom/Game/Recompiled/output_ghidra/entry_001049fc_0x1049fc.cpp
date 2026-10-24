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

// Function: entry_001049fc
// Address: 0x1049fc - 0x104b04
void entry_001049fc_0x1049fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001049fc_0x1049fc");
#endif

    ctx->pc = 0x1049fcu;

    // 0x1049fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104a00: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x104a04: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x104a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x104a08: 0x262741f8  addiu       $a3, $s1, 0x41F8
    ctx->pc = 0x104a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16888));
    // 0x104a0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x104a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x104a10: 0x14e1823  subu        $v1, $t2, $t6
    ctx->pc = 0x104a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x104a14: 0x12b2023  subu        $a0, $t1, $t3
    ctx->pc = 0x104a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x104a18: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104a1c: 0x8cea0280  lw          $t2, 0x280($a3)
    ctx->pc = 0x104a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x104a20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x104a24: 0x240b0180  addiu       $t3, $zero, 0x180
    ctx->pc = 0x104a24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104a28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x104a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x104a2c: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x104a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x104a30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104a34: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x104a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104a38: 0x8ece0010  lw          $t6, 0x10($s6)
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x104a3c: 0x6b7818  mult        $t7, $v1, $t3
    ctx->pc = 0x104a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x104a40: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x104a44: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x104a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x104a48: 0x24c90400  addiu       $t1, $a2, 0x400
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x104a4c: 0x24633a30  addiu       $v1, $v1, 0x3A30
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14896));
    // 0x104a50: 0x8ecd0000  lw          $t5, 0x0($s6)
    ctx->pc = 0x104a50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x104a54: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x104a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104a58: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x104a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x104a5c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x104a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104a60: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x104a64: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x104a64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x104a68: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x104a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x104a6c: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x104a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x104a70: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x104a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x104a74: 0x1cb8818  mult        $s1, $t6, $t3
    ctx->pc = 0x104a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x104a78: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x104a78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x104a7c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x104a80: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x104a84: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x104a88: 0x24ec012c  addiu       $t4, $a3, 0x12C
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 300));
    // 0x104a8c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x104a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x104a90: 0x24a53a50  addiu       $a1, $a1, 0x3A50
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14928));
    // 0x104a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104a98: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x104a9c: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x104aa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x104aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104aa4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x104aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x104aa8: 0x22d7021  addu        $t6, $s1, $t5
    ctx->pc = 0x104aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x104aac: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x104ab0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x104ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x104ab4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x104ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x104ab8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x104ab8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x104abc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x104ac0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x104ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ac4: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x104ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x104ac8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x104ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104acc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104ad0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x104ad4: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x104ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x104ad8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x104ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104adc: 0xad0b0028  sw          $t3, 0x28($t0)
    ctx->pc = 0x104adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 11));
    // 0x104ae0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x104ae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104ae4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x104ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104ae8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x104ae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104aec: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x104aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104af0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x104af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104af4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x104af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104af8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x104af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104afc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x104afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104b00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x104b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x104b04u;
}

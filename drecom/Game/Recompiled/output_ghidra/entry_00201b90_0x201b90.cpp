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

// Function: entry_00201b90
// Address: 0x201b90 - 0x201d9c
void entry_00201b90_0x201b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201b90_0x201b90");
#endif

    ctx->pc = 0x201b90u;

    // 0x201b90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201b94: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201b94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201b98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201b9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201ba0: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201ba4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201ba8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201bac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201bb0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201bb4: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201bb8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201bbc: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201bc0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x201bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x201bc4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x201bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x201bc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201bcc: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201bd0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x201bd4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201bd8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201bdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201be0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201be4: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201be8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x201bec: 0x3443080a  ori         $v1, $v0, 0x80A
    ctx->pc = 0x201becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2058);
    // 0x201bf0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201bf4: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201bf8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x201bfc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x201bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x201c00: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c04: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c08: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201c08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x201c0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c10: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201c18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c1c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201c1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201c20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c24: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c28: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x201c28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x201c2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201c30: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c34: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c38: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201c38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x201c3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c40: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201c48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c4c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201c50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c54: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c58: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c5c: 0xac220ac0  sw          $v0, 0xAC0($at)
    ctx->pc = 0x201c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AC0u, _value); } while (0);
    // 0x201c60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201c64: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201c64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201c68: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x201c6c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201c74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c78: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x201c7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201c80: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
    // 0x201c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c88: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x201c8c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201c90: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201c94: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x201c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201c98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x201c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x201c9c: 0x38102  srl         $s0, $v1, 4
    ctx->pc = 0x201c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x201ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201ca4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201ca8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x201cac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x201cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201cb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201cb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201cb8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x201cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x201cbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x201cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x201cc0: 0x24420ad0  addiu       $v0, $v0, 0xAD0
    ctx->pc = 0x201cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2768));
    // 0x201cc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201cc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201ccc: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201cccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201cd0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x201cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201cd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201cd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201cdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201ce0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x201ce4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201ce8: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201cec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201cecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x201cf0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201cf4: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201cf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x201cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x201cfc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x201cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x201d00: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x201d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x201d04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201d08: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d0c: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201d10: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x201d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x201d14: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d18: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201d1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201d20: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d24: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201d28: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x201d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x201d2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x201d2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x201d30: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x201d34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x201d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201d3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x201d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x201d40: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d44: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201d48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x201d48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x201d4c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x201d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x201d50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d54: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201d58: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x201d58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x201d5c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d60: 0x8c220ab8  lw          $v0, 0xAB8($at)
    ctx->pc = 0x201d60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201d64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x201d68: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d6c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201d70: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d74: 0x8c220ac0  lw          $v0, 0xAC0($at)
    ctx->pc = 0x201d74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AC0u));
    // 0x201d78: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201d7c: 0xac220ab8  sw          $v0, 0xAB8($at)
    ctx->pc = 0x201d7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x201d80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x201d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x201d84: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x201d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x201d88: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x201d88u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x201d8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x201d8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201d90: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x201d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201d94: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x201D94u;
    {
        const bool branch_taken_0x201d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d94) {
            ctx->pc = 0x201E48u;
            return;
        }
    }
    ctx->pc = 0x201D9Cu;
}
